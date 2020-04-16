#ifndef ACTOR_H
#define ACTOR_H
#include<string>

using namespace std;


class Actor {
    private:
        string name;
        int health;
        int x;
        int y;
    public:
        string GetName();
        int GetHealth();
        int GetX();
        int GetY();

        void SetName(string n);
        void SetHealth(int h);
        void SetX(int xpos);
        void SetY(int ypos);


        void move(Actor& actor, int choice);
        

};



#endif
