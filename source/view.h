#ifndef VIEW_H
#define VIEW_H
#include<vector>
#include<curses.h>
#include"actor.h"

using namespace std;

void draw(vector<vector<char>>& world, int CHUNKSIZE, Actor& actor);





#endif