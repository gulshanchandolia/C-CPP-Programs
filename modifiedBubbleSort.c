/*Bubble Sort*/
#include <stdio.h>

void swap(int arr[],int i1,int i2){
	int t=0;
	t=arr[i1];
	arr[i1]=arr[i2];
	arr[i2]=t;	
}

void bubbleSort(int arr[],int n){
	int round,i,flag;
	for(round=1;round<=n-1;round++){
		for(i=0;i<=n-round-1;i++)
			if(arr[i]>arr[i+1]){
				flag = 1;
				swap(arr,i,i+1);
			}
		if(flag ==0){
			return;
		}
	}
}

void main()
{
	int arr[] = {0,1,8,7,6,5,4,3,2,9,10},i;
	bubbleSort(arr,11);
	printf("Sorted Array:\t");
	for(i=0;i<=10;i++)
		printf("%d\t",arr[i]);
	getch();
}
