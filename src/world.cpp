#include"../include/world.h"
using namespace std;

void World::SetxDim(int x) {
	xDim = x;
}
void World::SetyDim(int y) {
	yDim = y;
}
void World::SetBoard(vector<vector<char>>& b) {
	board = b;
}
void World::SetActors(vector<Actor> a) {
	actors = a;
}

int World::GetxDim() {
	return xDim;
}
int World::GetyDim() {
	return yDim;
}
vector<vector<char>> World::GetBoard() {
	return board;
}
vector<Actor> World::GetActors() {
	return actors;
}

void World::CreateNewWorld(int chunksize) {


	vector<char> row;
	for(int i = 0; i < chunksize; i++) {
		for(int j = 0; j < chunksize; j++) {
			if(i == 0 || j == 0 || j == chunksize - 1 || i == chunksize - 1) {
				row.push_back('#');
			} else {
				row.push_back(',');
			}
		}
		board.push_back(row);
		row.clear();
	}
	
} 




