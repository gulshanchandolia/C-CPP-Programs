/*Write a program that asks the user for their name and greets them with their name*/
#include<stdio.h>
#include<conio.h>
void main(){
	char name[20];
	clrscr();
	printf("Enter Your Name");
	scanf("%s",&name);
	printf("Hello %s",name);
	getch();
}


