/*Write a program that asks the user for a number n and prints the sum of the numbers 1 to n. */
#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		if(i%3==0)
			sum=sum+i;
		else if(i%5==0)
			sum=sum+i;
	}
	if(sum == 0)
		printf("Invaild Result");
	else
		printf("Sum=%d",sum);
	getch();
}