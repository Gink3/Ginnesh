#include"actor.h"

void Actor::move(Actor& actor, int choice) {
    

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