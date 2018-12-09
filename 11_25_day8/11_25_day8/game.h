#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 5
#define COL 5
void menu();
void playgame();
void showchess(char chess[ROW][COL],int row,int col);
void printfchess(char chess[ROW][COL],int row,int col);
void playermove(char chess[ROW][COL],int row,int col);
void computermove(char chess[ROW][COL],int row,int col);
char iswin(char chess[ROW][COL],int row,int col);









#endif//__DAME_H__