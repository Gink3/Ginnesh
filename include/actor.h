#ifndef ACTOR_H
#define ACTOR_H
#include<string>
#include<vector>
#include<curses.h>
using namespace std;


class Actor {
    private:
        string name;
        int health;
        int x;
        int y;
        char tile;
        int xp;
        int level;
    public:
        Actor();
        Actor(string n);
        Actor(string n, int h, int x, int y, char t, int exp, int l);
        string GetName();
        int GetHealth();
        int GetX();
        int GetY();
        char GetTile();

        void SetName(string n);
        void SetHealth(int h);
        void SetX(int xpos);
        void SetY(int ypos);
        void SetTile(char t);

        void move(char choice, int chunksize, vector<vector<char>> world);
        

};



#endif
