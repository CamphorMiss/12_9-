#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void showchess(char chess[ROW][COL],int row,int col)
{
memset(&chess[0][0],' ',row*col*sizeof(char));
}
void printfchess(char chess[ROW][COL],int row,int col)
{

int i=0;
int j=0;
int m=0;
int n=0;
for(i=0;i<row-1;i++)
{

	for(m=0;m<col-1;m++)
	{
	printf(" %c |",chess[i][m]);

	}	
	printf(" %c \n",chess[i][col-1]);
	for(m=0;m<col-1;m++)
	{
	printf("---|");

	}	
	printf("---\n");
}
	if(i<=row-1)//最后一行
	{
   for(m=0;m<col-1;m++)
	{
	printf(" %c |",chess[i][m]);

	}	
	printf(" %c \n",chess[i][col-1]);
    }
}

void playermove(char chess[ROW][COL],int row,int col)
{

	int x=0;
	int y=0;
	if(iswin(chess,row,col)=='S')
	{	   
		printf("请输入你要走的坐标：> ");
	while(1)
	{

     scanf("%d%d",&x,&y);
	 if(x>=1&&x<=row&&y>=1&&y<=col)
	 {
	      if(chess[x-1][y-1]==' ')
	       {
             chess[x-1][y-1]='X';
              break;
	        }
	        else 
	        {
		      printf("此坐标已有棋子，请重新选择！\n");
	         }
	 }
	 else{
		 printf("输入坐标错误，请重新输入！\n");
        }
	}
}
}
void computermove(char chess[ROW][COL],int row,int col)
{
int x=0;
int y=0;
if(iswin(chess,row,col)=='S')
{
printf("电脑走：>\n");
while(1)
{
x=rand()%row+1;
y=rand()%col+1;
if(chess[x][y]==' ')
{
chess[x][y]='O';
printfchess(chess,ROW,COL);

break;
}
}
	}
}

char iswin(char chess[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	int count=row*col;
	for(i=0;i<=row-3;i++)
	{
		for(j=0;j<=col-3;j++)
		{
	        if(chess[i][j]==chess[i+1][j+1]&&chess[i+1][j+1]==chess[i+2][j+2]&&chess[i+1][j+1]!=' ')
			{
				return chess[i+1][j+1];
			}
		}
	}		
	for(i=0;i<=col-3;i++)
	{
		for(j=0;j<=row-3;j++)
		{
			if(chess[i][j+3]==chess[i+1][j+2]&&chess[i+1][j+2]==chess[i+2][j+1]&&chess[i+1][j+2]!=' ')
			{
				return chess[i+1][j+2];//1,3 2,2 3,1 出问题，判断失败？？？？？？？？？？？？？？？
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	       if(chess[i][j]==chess[i+1][j]&&chess[i+1][j]==chess[i+2][j]&&chess[i+1][j]!=' ')
			   return chess[i+1][j];
		   if(chess[i][j]==chess[i][j+1]&&chess[i][j+1]==chess[i][j+2]&&chess[i][j+1]!=' ')
			   return chess[i][j+1];
	
	
		}
	}
	for(i=0;i<row;i++)//平局
	{
	  for(j=0;j<col;j++)
	  {
	   if(chess[i][j]!=' ')
	     count--;
	  }
}
  if(count==0)
	 return 'P';

return 'S';
}
void playgame()
{
	char chess[ROW][COL]={0};
	showchess( chess,ROW,COL);
    printfchess(chess,ROW,COL);
	while(iswin(chess,ROW,COL)=='S')
	{ 
	playermove(chess,ROW,COL);
	computermove(chess,ROW,COL);
	}
	if(iswin(chess,ROW,COL)=='X')
	{
	  printf("玩家赢！\n");
    printfchess(chess,ROW,COL);

	}
	if(iswin(chess,ROW,COL)=='O')
	{
	  printf("电脑赢！\n");
    printfchess(chess,ROW,COL);

	}
	if(iswin(chess,ROW,COL)=='P')
	{
	  printf("平局！\n");
    printfchess(chess,ROW,COL);

	}
}

