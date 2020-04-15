#include"world.h"
using namespace std;

void CreateWorld(vector<vector<char>>& world, int chunksize) {

	vector<char> row;
	for(int i=0;i<chunksize;i++) {
		row.push_back(',');
	}


	for(int i=0;i<chunksize;i++) {
		world.push_back(row);
	}
} 




