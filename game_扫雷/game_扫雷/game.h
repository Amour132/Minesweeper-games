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


  
void init_board(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//��ʼ��
void display(char show[ROWS][COLS]); //��ӡ 
void set_mine(char mine[ROWS][COLS]);//�����׵�λ��  
int Sweep(char mine[ROWS][COLS], char show[ROWS][COLS]);//��ʼɨ��  
int get_num(char mine[ROWS][COLS], int x, int y);//�����׵ĸ���  

#endif //_GAME_H_