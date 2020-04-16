#include"actor.h"

void Actor::move(char choice,int chunksize) {

    int newX=0;
    int newY=0;

    switch(choice) {
        case '1':
            newX=-1;
            newY=+1;
            break;
        case '2':
            newY+=1;
            break;
        case '3':
            newX+=1;
            newY+=1;
            break;
        case '4':
            newX-=1;
            break;
        case '6':
            newX+=1;
            break;
        case '7':
            newX-=1;
            newY-=1;
            break;
        case '8':
            newY-=1;
            break;
        case '9':
            newX+=1;
            newY-=1;
            break;

    }
    if((x+newX) > (chunksize - 1) || (x+newX) < 0 || (y+newY) > (chunksize - 1) || (y+newY) < 0) {
        printw("Invalid Move choice");
    } else {
        x+=newX;
        y+=newY;
    }

}

Actor::Actor() {
    health = 5;
    x=1;
    y=1;
    tile='@';
}

Actor::Actor(string n) {
    name=n;
    x=5;
    y=5;
    tile='@';
}

string Actor::GetName() {
    return name;
}
int Actor::GetHealth() {
    return health;
}
int Actor::GetX() {
    return x;
}
int Actor::GetY() {
    return y;
}
char Actor::GetTile() {
    return tile;
}

void Actor::SetName(string n) {
    name = n;
}
void Actor::SetHealth(int h) {
    health = h;
}
void Actor::SetX(int xpos) {
    x = xpos;
}
void Actor::SetY(int ypos) {
    y = ypos;
}
void Actor::SetTile(char t) {
    tile = t;
}