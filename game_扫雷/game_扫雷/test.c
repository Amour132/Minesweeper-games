#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	set_mine(mine);  
    display(show);    
    Sweep(mine,show);  
}
int main()
{
	int input = 0;
    srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	}while(input);
	return 0;
}