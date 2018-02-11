#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include<windows.h>
#include <conio.h>
int a[9]={0},put2;
char input;
void start()
{
	srand(time(NULL));
}

void out()
{
	
}

void in()
{
	input=getch();
	while(a[put2]!=0)
		put2=rand()%9;
	a[put2]=2;
	if(input=='w')
		;		
}
int main()
{
	start();
	while(1)
	{
		in();
		out();		
	} 
} 
