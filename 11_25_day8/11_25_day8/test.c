#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
printf("*********************************\n");
printf("*********************************\n");
printf("********   1 .������Ϸ   ********\n");
printf("********   0 .�˳���Ϸ   ********\n");
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
printf("��ѡ��");
scanf("%d",&input);
switch(input)
{
case 0:
printf("��Ϸ�˳��ɹ���\n");
	break;
case 1:
	playgame();
	break;
default:
	printf("ѡ�����������ѡ��\n");
	break;
}
	}while(input);
system("pause");
return 0;
}
