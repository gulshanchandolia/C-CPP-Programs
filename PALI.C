/*Write a function that tests whether a string is a palindrome*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char s[20];
	int p;
	clrscr();
	printf("Enter a string\n");
	gets(s);
	p=pali(s);
	if(p==0)
		printf("The string is a palindrome.\n");
	else if(p==1)
		printf("The string is not a palindrome.\n");
	getch();
}
int pali(char a[20]){
	int x=1;
	char b[20];
	strcpy(b, a);  // Copy the string
	strrev(b);  // Reverse the string
	if(strcmp(a, b) == 0)  // Comparing string with the reverse string
		x=0;
	return x;
}