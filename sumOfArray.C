/*Write three functions that compute the sum of the numbers in a list: using a for-loop, a while-loop and recursion.*/ 
#include <stdio.h>
#include <conio.h>

int f_fun(int n[],int len){
	int i,res=0;
	for(i=0;i<len;i++)
		res+=n[i];
	return res;
}
int w_loop(int n[],int len){
	int i,res=0;
	while(len>-1){
		res+=n[len];
		len--;
	}
	return res;
}
int rec(int n[],int len){
	int res=0;
	if(len<=0)
		return 0;
	else
		res=rec(n,len-1)+n[len-1];
	return res;
}
void main()
{
	int i,res=0,len=0,n[5]={5,4,7,6,8};
	clrscr();
	for(i=0;n[i]!='\0';i++)
		len++;
	res=rec(n,len);
	printf("Sum of Numbers in Array:%d",res);
	getch();
}