#include <stdio.h>
#include <windows.h>

//color list
enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VOILET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};

// console text color function
void textcolor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

// console background color function
void bgcolor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
}


void main() {
    textcolor(RED); //text : RED
    bgcolor(RED);
    printf("Hello World!\n");

    textcolor(WHITE); //text : VIOLET
    printf("Hello World!\n");
    
}
