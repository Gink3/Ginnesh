#ifndef MENU_H
#define MENU_H

#include<curses.h>


char MainMenu();
char HelpMenu();
void LoadRoom();

bool MenuInputCheck(char c);



#endif