#include <curses.h>
#include<ctype.h>
#include<vector>
#include"../include/world.h"
#include"../include/view.h"
#include"../include/actor.h"
#include"../include/menu.h"
#include"../include/enemies.h"
using namespace std;

int main(int argc, char *argv[]){
	
	int CHUNKSIZE = 150;
	CHUNKSIZE += 2;
	char command;
	bool debugMode = false;


	vector<Actor> mobs;

	World current;

	for(int i=0;i<argc;i++) {
		string arg = argv[i];
		if(arg == "-d" || arg == "--debug") {
			debugMode = true;
		}
	}

	Actor player;

	initscr();
	curs_set(0);
	noecho();

	char input;
	bool menu = true;

	do {
		input = MainMenu();
		if(input == 'q') {
			menu = false;
			endwin();
		} else if (input == '?') {
			HelpMenu();
		} else if (input == 'l') {
			LoadRoom();
		} else  if (input == 'p'){
			current.CreateNewWorld(CHUNKSIZE);
				
			int count = 0;

			//game loop
			while(command != 'q' && command != 'Q') {
				count+=1;
				clear();
				draw(current.GetBoard(), CHUNKSIZE, player);
				printw("Player x: %d", player.GetX());
				printw("\nPlayer y: %d", player.GetY());
				if(debugMode) {
					printw("\nCounter: %d", count);
					printw("\nKey pressed: %c",command);
				}
				command = getch();
				if(isdigit(command)) {
					player.move(command,CHUNKSIZE, current.GetBoard());
				}
				refresh();
				
			}
			command = 'z';
		}
	} while(menu == true);

	return 0;
 }  
