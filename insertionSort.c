#include<stdio.h>
void insertionSort(int arr[],int n){
	int i,j,tmp;
	for(i=1;i<n;i++){
		tmp = arr[i];
		j=i-1;
		while(j>=0 && tmp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
}
void main(){
	int arr[] = {10,7,8,9,1,5},i; 
	insertionSort(arr, 6);
	printf("Sorted Array:\t");
	for(i=0;i<=5;i++)
		printf("%d\t",arr[i]);
	getch();
}
