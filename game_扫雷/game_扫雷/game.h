#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
#include<string.h>  

#define	ROWS 11  
#define COLS 11  
#define Count 10  
#define	ROW 9 
#define COL 9 


  
void init_board(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//初始化
void display(char show[ROWS][COLS]); //打印 
void set_mine(char mine[ROWS][COLS]);//设置雷的位置  
int Sweep(char mine[ROWS][COLS], char show[ROWS][COLS]);//开始扫雷  
int get_num(char mine[ROWS][COLS], int x, int y);//计算雷的个数  

#endif //_GAME_H_