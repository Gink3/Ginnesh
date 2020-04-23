#include <curses.h>
#include<ctype.h>
#include<vector>
#include"world.h"
#include"view.h"
#include"actor.h"
#include"menu.h"
#include"enemies.h"
using namespace std;

int main(int argc, char *argv[]){
	
	int CHUNKSIZE = 150;
	CHUNKSIZE += 2;
	char command;
	bool debugMode = false;


	vector<Actor> mobs;

	

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

	char input = MainMenu();

	if(input == 'q') {
		endwin();
	} else if (input == '?') {
		HelpMenu();
	} else {
		vector<vector<char>> world;
		CreateWorld(world, CHUNKSIZE);
			
		int count = 0;

		//game loop
		while(command != 'q' && command != 'Q') {
			count+=1;
			clear();
			draw(world, CHUNKSIZE, player);
			printw("Player x: %d", player.GetX());
			printw("\nPlayer y: %d", player.GetY());
			if(debugMode) {
				printw("\nCounter: %d", count);
				printw("\nKey pressed: %c",command);
			}
			command = getch();
			if(isdigit(command)) {
				player.move(command,CHUNKSIZE, world);
			}
			refresh();
			
		}


		endwin();
	}

	return 0;
 }  
