/*Bubble Sort*/
#include <stdio.h>

void bubbleSort(int arr[],int n){
	int round,i,t;
	for(round=1;round<=n-1;round++){
		for(i=0;i<=n-round-1;i++){
			if(arr[i]>arr[i+1]){
				t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;	
			}
		}
	}
}

void main()
{
	int arr[] = {10,7,8,9,1,5},i;
	bubbleSort(arr,6);
	printf("Sorted Array:\t");
	for(i=0;i<=5;i++)
		printf("%d\t",arr[i]);
	getch();
}
