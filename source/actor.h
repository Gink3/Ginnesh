#ifndef ACTOR_H
#define ACTOR_H
#include<string>
#include<curses.h>
using namespace std;


class Actor {
    private:
        string name;
        int health;
        int x;
        int y;
        char tile;
    public:
        Actor();
        Actor(string n);
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

        void move(char choice, int chunksize);
        

};



#endif
