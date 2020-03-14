#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[4840];/*这里是字符数组,用来存储从文件打开的字符串*/
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
    
    
	for(i=1;i<=2160;i++)
	{
		sprintf(FileName,"F:\\1\\1 (%ld).txt",i);/*文件地址*/
        
	in=fopen(FileName,"r");
	fread(hi,1,4840
		,in);
	printf("%s\n%d",hi,i);
	Sleep(29);
	gotoxy(1,1);fclose(in); 
	}
} 
void gotoxy(int x, int y) //这个函数是将光标位置移动到坐标x,y 
	{
		COORD pos;pos.X = x - 1;pos.Y = y - 1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
