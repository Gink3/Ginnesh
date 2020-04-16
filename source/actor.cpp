#include"actor.h"

void Actor::move(char choice) {
    switch(choice) {
        case '1':
            x-=1;
            y+=1;
            break;
        case '2':
            y+=1;
            break;
        case '3':
            x+=1;
            y+=1;
            break;
        case '4':
            x-=1;
            break;
        case '6':
            x+=1;
            break;
        case '7':
            x-=1;
            y-=1;
            break;
        case '8':
            y-=1;
            break;
        case '9':
            x+=1;
            y-=1;
            break;

    }

}

Actor::Actor() {
    health = 5;
    x=5;
    y=5;
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