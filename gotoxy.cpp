#include<stdio.h> 
#include<conio.h>/*Included for gotoxy function*/ 
int main() 
{ 
	int x=10; 
	int y=10; 
	clrscr(); 
	printf("Hello World! This is starting position!"); 
	gotoxy(x,y);	/*This line changes cursor position to tenth  
					column and tenth row, irrespective of it's  
					previous position, and new characters will be  
					printed from new position onward*/ 
	printf("Hello World! This is changed position!"); 
	getch(); 
	return 0; 
} 
