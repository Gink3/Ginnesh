#include"world.h"
using namespace std;

void CreateWorld(vector<vector<char>>& world, int chunksize) {


	vector<char> row;
	for(int i = 0; i < chunksize; i++) {
		for(int j = 0; j < chunksize; j++) {
			if(i == 0 || j == 0 || j == chunksize - 1 ) {
				row.push_back('#');
			} else {
				row.push_back(',');
			}
		}
		world.push_back(row);
		row.clear();
	}

} 




