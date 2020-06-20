/*Write a program that prints a multiplication table for numbers up to 12*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i,p=0;
	clrscr();
	printf("Enter Number to Print Table");
	scanf("%d",&n);
	printf("Multiplication table for numbers\n");
	for(i=1;i<11;i++){
		p=n*i;
		printf("%dX%d=%d\n",n,i,p);
	}
	getch();
}