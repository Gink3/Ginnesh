#include <curses.h>
#include<vector>
#include"world.h"
using namespace std;

int main(){
	
	const int CHUNKSIZE = 10;

	initscr();
	(void)echo();

	vector<vector<char>> world;
	CreateWorld(world, CHUNKSIZE);
		
	for(int row=0;row<CHUNKSIZE;row++) {
		for(int col=0;col<CHUNKSIZE;col++) {
			printw("%c", world[row][col]);
		}
		printw("\n");
	}
	
	refresh();

	printw( "\n\n\nPress ENTER to quit." );
	getch();
	refresh();
	endwin();
	return 0;
 }  
