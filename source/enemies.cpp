#include"enemies.h"
#include"actor.h"

Actor LoadMob(string n) {
	Actor mob;
	string name;
	int d;
	char c;

	ifstream fin;

	string filename = n + ".m";

	fin.open(filename);

	fin >> name;
	mob.SetName(name);

	fin >> d;
	mob.SetHealth(d);
	fin >> c;
	mob.SetTile(c);

	return mob;
}