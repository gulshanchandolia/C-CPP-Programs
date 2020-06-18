/*Write a program that asks the user for a number n and prints the sum of the numbers 1 to n*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		sum=sum+i;
	printf("Sum=%d",sum);
	getch();
}