#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
printf("*********************************\n");
printf("*********************************\n");
printf("********   1 .进入游戏   ********\n");
printf("********   0 .退出游戏   ********\n");
printf("*********************************\n");
printf("*********************************\n");
printf("*********************************\n");


}
int main()
{
int input;
system("color F9");
srand((unsigned int)time(NULL));
do{
menu();
printf("请选择：");
scanf("%d",&input);
switch(input)
{
case 0:
printf("游戏退出成功！\n");
	break;
case 1:
	playgame();
	break;
default:
	printf("选择错误，请重新选择！\n");
	break;
}
	}while(input);
system("pause");
return 0;
}
