#include <curses.h>
#include<ctype.h>
#include<vector>
#include"world.h"
#include"view.h"
#include"actor.h"
using namespace std;

int main(int argc, char *argv[]){
	
	const int CHUNKSIZE = 10;
	char command;
	bool debugMode = false;

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
	(void)echo();



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
			player.move(command);
		}
		refresh();
		
	}
	
	
	endwin();
	return 0;
 }  
