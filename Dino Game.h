//
// Created by 12san on 23-07-2024.
//

#ifndef INTRODUCTION_TO_PROGRAMMING_DINO_GAME_H
#define INTRODUCTION_TO_PROGRAMMING_DINO_GAME_H

#endif //INTRODUCTION_TO_PROGRAMMING_DINO_GAME_H

#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

//function to set console cursor position
void moveTo(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    setConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}