/*Write a program that asks the user for their name and greets them with their name*/
/*Modify the previous program such that only the user Bob is greeted with his name*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char name[20];
	clrscr();
	printf("Enter Your Name");
	scanf("%s",&name);
	if(!strcmp(name,"Bob"))
		printf("Hello %s",name);
	else if(!strcmp(name,"bob"))
		printf("Hello %s",name);
	else
		printf("Invalid");
	getch();
}


