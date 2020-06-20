/*How do you find the missing number in a given integer array of 1 to 100?*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int a[20],i,n,sn=0,ss=0;
	clrscr();
	printf("Enter the series digits");
	scanf("%d",&n);
	printf("Enter series with missing a number");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sn=(n+1)*(n+2)/2;
	for(i=0;i<n;i++)
		ss+=a[i];
	sn-=ss;
	printf("Missing Number is %d",sn);
	getch();
}