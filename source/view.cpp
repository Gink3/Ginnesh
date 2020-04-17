#include"view.h"

using namespace std;

void draw(vector<vector<char>>& world, int CHUNKSIZE, Actor& player) {
	
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

	int view=20;

	/*
	coords[0] x min
	coords[1] x max
	coords[2] y min
	coords[3] y max
	*/

	if(playerX < 10) {
		coords[0] = 0;
		coords[1] = playerX + view;
	} else if (playerX > chunksize - 11) {
		coords[0] = chunksize - (2 * view + 1);
		coords[1] = chunksize;
	} else {
		if (playerX - view > 0) {
			coords[0] = playerX - view;
		} else {
			coords[0] = 0;
		}
		coords[1] = playerX + view;
	}

	if(playerY < 10) {
		coords[2] = 0;
		coords[3] = playerY + view;
	} else if (playerY > chunksize - 11) {
		coords[2] = chunksize - (2 * view + 1);
		coords[3] = chunksize;
	} else {
		if(playerY - view > 0) {
			coords[2] = playerY - view;
		} else {
			coords[2] = 0;
		}
		coords[3] = playerY + view;
	}

	return coords;

}

