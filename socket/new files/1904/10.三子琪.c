//////game.h//////

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW  3
#define  COL 3


void menu();
void game();
void inint_arr(char arr, int row, int col);
void search_pic(char arr[ROW][COL], int row, int col);
void computer_go(char arr[ROW][COL], int row, int col);
void player_go(char arr[ROW][COL], int row, int col);

char check_win(char arr[ROW][COL],int row,int col);
char is_full(char arr[ROW][COL], int row, int col);


////game.c////


#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("**** 1、   进入游戏     ****\n");
	printf("**** 0、   退出游戏     ****\n");
	printf("****************************\n");
}
void game()
{
	char win = 0;
	char arr[ROW][COL] = { 0 };
	inint_arr(arr, ROW, COL);//初始化数组
	search_pic(arr, ROW, COL);//棋盘
	while (1)
	{
		computer_go(arr, ROW, COL);//电脑走
		search_pic(arr, ROW, COL);//棋盘
		win = check_win(arr, ROW, COL);//检查是否赢
		if (win == 'x')
		{
			printf("电脑赢\n");
			break;
		}
		if (win == 'w')
		{
			printf("你赢了\n");
			break;
		}
		win = is_full(arr, ROW, COL);
		if (win == 1)//1代表满了
		{
			printf("平局\n");
			break;
		}
		player_go(arr, ROW, COL);//人走
		search_pic(arr, ROW, COL);//棋盘
		win = check_win(arr, ROW, COL);//检查是否赢
		if (win == 'x')
		{
			printf("电脑赢\n");
			break;
		}
		if (win == 'w')
		{
			printf("你赢了\n");
			break;
		}
		win = is_full(arr, ROW, COL);
		if (win == 1)
		{
			printf("平局\n");
			break;
		}
	}
}
void inint_arr(char arr[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void search_pic(char arr[ROW][COL], int row, int col)
{
	int i = 0;
		for (i = 0; i < col; i++)
		{
			printf(" %c | %c | %c \n", arr[i][0],arr[i][1],arr[i][2]);
			printf("---|---|---\n");
		}
}
void computer_go(char arr[ROW][COL], int row, int col)
{
	int i, j;
	printf("电脑走\n");
	while (1)
	{
		
		int i = rand() % 3;
		int j = rand() % 3;
		if (arr[i][j] == ' ')
		{
			arr[i][j] = 'x';
			break;
		}
	}
}
void player_go(char arr[ROW][COL], int row, int col)
{
	int i, j;
	printf("人走：\n");
	while (1)
	{
		printf("请输入您要下的位置:>");
		scanf("%d %d", &i, &j);
		if (i - 1 > 3 || j - 1 > 3)
		{
			printf("您的输入错误，请重新输入：\n");
		}
		else if (arr[i - 1][j - 1] != ' ')
		{
			printf("已被占用，请重新输入！\n");
		}
		else if(arr[i - 1][j - 1] == ' ')
		{
			arr[i - 1][j - 1] = 'w';
			break;
		}
	}
}
char check_win(char arr[ROW][COL],int row,int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][1] == arr[i][2])
		{
			return arr[i][0];
		}
	}
	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[1][i] == arr[2][i])
		{
			return arr[0][i];
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == arr[2][2])
	{
		return arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[1][1] == arr[2][0])
	{
		return arr[1][1];
	}
	return 0;
}
char is_full(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

////main.c////


#include "game.h"
int main()
{
	int input = 1;
	while (input)
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:			
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入：\n");
			break;
		}
	}
	
	system("pause");
	return 0;
}
