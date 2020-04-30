#ifndef WORLD_H
#define WORLD_H

#include<cstdlib>
#include<ncurses.h>
#include<vector>
#include"actor.h"

using namespace std;

class World {
	private:
		int xDim;
		int yDim;
		vector<Actor> actors;
		vector<vector<char>> board;
	public:
		void SetxDim(int x);
		void SetyDim(int y);
		void SetBoard(vector<vector<char>>& b);
		void SetActors(vector<Actor> a);

		int GetxDim();
		int GetyDim();
		vector<vector<char>> GetBoard();
		vector<Actor> GetActors();



		void CreateNewWorld(int chunksize);
};

#endif
