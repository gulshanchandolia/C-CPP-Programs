/*Write a function that tests whether a string is a palindrome*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int pali(char a[20]){
	int x=1,i,j,len=0;
	char b[20];
	for(i=0;a[i]!='\0';i++)
		len++;
	for(i=0,j=len-1;i<len,j>=0;i++,j--){
		b[j]=a[i];
	} // Reverse the string
	for(i=0;i<len;i++){
		if(a[i]==b[i])  // Comparing string with the reverse string
			x=0;
		else{
			x=1;
			break;
		}
	}
	return x;
}
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
