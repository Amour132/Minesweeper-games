#include "game.h"
void init_board(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			mine[i][j] = '0';
			show[i][j] = '*';
		}
	}
}
void display(char show[ROWS][COLS]) 
{  
    int i = 0;  
    int j = 0;  
    printf(" ");  
    for (i = 1; i < COLS - 1; i++)  
    {  
        printf(" %d ", i);  
    }  
    printf("\n");  
    for (i = 1; i < ROWS - 1; i++)  
    {  
        printf("%d", i);  
        for (j = 1; j < COLS - 1; j++)  
        {  
            printf(" %c ", show[i][j]);  
        }  
        printf("\n");  
    }  
}  
void set_mine(char mine[ROWS][COLS])  
{  
    int count = Count;  
    int x = 0;  
    int y = 0;   
    while (count)  
    {  
        x = rand() % 9 + 1;  
        y = rand() % 9 + 1;  
        if (mine[x][y] == '0')  
        {  
            mine[x][y] = '1';  
            count--;  
        }  
    }  
}  


int Sweep(char mine[ROWS][COLS], char show[ROWS][COLS])  
{  
    int count = 0;  
    int x = 0;  
    int y = 0;  
    while (count!=((ROWS-2)*(COLS-2)-Count))  
    {  
        printf("ÇëÊäÈë×ø±ê£º\n");  
        scanf("%d%d", &x, &y);  
        if (mine[x-1][y-1] == '1')  
        {  
            printf("Äã²Èµ½À×ÁË£¡\n");  
            return 0;  
        }  
        else  
        {  
            int ret = get_num(mine, x, y);  
            show[x-1][y-1] = ret + '0';   
            display(show); 
            count++;  
        }  
    }  
    printf("¹§Ï²ÄãÓ®ÁË£¡\n");  
    display(mine);  
    return 0;  
}  
int get_num(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]
	+mine[x][y-1]+mine[x][y+1]-8*'0';
}