#include"../include/view.h"

using namespace std;

void draw(vector<vector<char>> world, int CHUNKSIZE, Actor& player) {
	
	vector<int> coords = GetView(player, CHUNKSIZE);
	
	for(int row=coords[2]; row < coords[3];row++) {
		for(int col= coords[0]; col < coords[1]; col++) {
			if(row == player.GetY() && col == player.GetX()) {
				printw("%c", player.GetTile());
			} else {
				printw("%c", world[row][col]);
			}

		}
		printw("\n");
	}

}

//returns +- X and Y around the player
vector<int> GetView(Actor& actor, int chunksize) {
	int playerX = actor.GetX();
	int playerY = actor.GetY();

	vector<int> coords(4);

	int Yview=10;
	int Xview=20;

	/*
	coords[0] x min
	coords[1] x max
	coords[2] y min
	coords[3] y max
	*/

	if(playerX < 10) {
		coords[0] = 0;
		coords[1] = Xview * 2;
	} else if (playerX > chunksize - Xview) {
		coords[0] = chunksize - (2 * Xview + 1);
		coords[1] = chunksize;
	} else {
		if (playerX - Xview > 0) {
			coords[0] = playerX - Xview;
		} else {
			coords[0] = 0;
		}
		if(playerX + Xview > (2*Xview)) {
			coords[1] = playerX + Xview;
		} else {
			coords[1] = Xview * 2;
		}
	}

	if(playerY < 10) {
		coords[2] = 0;
		coords[3] = Yview * 2;
	} else if (playerY > chunksize - 11) {
		coords[2] = chunksize - (2 * Yview + 1);
		coords[3] = chunksize;
	} else {
		if(playerY - Yview > 0) {
			coords[2] = playerY - Yview;
		} else {
			coords[2] = 0;
		}
		coords[3] = playerY + Yview;
	}

	return coords;

}

