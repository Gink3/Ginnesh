#include"menu.h"
#include<cctype>

char MainMenu() {
    char input;
    clear();
    printw("P - Play\n");
    printw("L - Load Room\n");
    printw("? - Help\n");
    printw("Q - Quit\n");
    refresh();
    do {
        input = getch();
        input = tolower(input);
    } while(!MenuInputCheck(input));
    return input;
}

char HelpMenu() {

}

bool MenuInputCheck(char c) {
    bool check = false;
    switch(c) {
        case 'p':
        case 'l':
        case '?':
        case 'q':
            check = true;
            break;
        default:
            check = false;
    } 
    return check;
}