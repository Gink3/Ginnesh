#include"view.h"

using namespace std;

void draw(vector<vector<char>>& world, int CHUNKSIZE, Actor& actor) {
	
	for(int row=0;row<CHUNKSIZE;row++) {
		for(int col=0;col<CHUNKSIZE;col++) {
			if(row == (actor.GetY() - 1) && col == (actor.GetX() - 1)) {
				printw("%c", actor.GetTile());
			} else {
				printw("%c", world[row][col]);
			}

		}
		printw("\n");
	}

}