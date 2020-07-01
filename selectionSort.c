/*Selection Sort*/
#include <stdio.h>

void swap(int arr[],int i1,int i2){
	int t=0;
	t=arr[i1];
	arr[i1]=arr[i2];
	arr[i2]=t;	
}

int min(int arr[],int k,int n){
	int j,Loc,min;
	min=arr[k];
	Loc=k;
	for(j=k+1;j<=n-1;j++)
		if(min>arr[j]){
				min=arr[j];
				Loc=j;
		}
	return(Loc);
}

void main()
{
	int arr[] = {0,1,8,7,6,5,4,3,2,9,10},i,Loc,n=11;
	for(i=0;i<=n-2;i++){
		Loc=min(arr,i,n);
		swap(arr,i,Loc);
	}
	printf("Sorted Array:\t");
	for(i=0;i<=10;i++)
		printf("%d\t",arr[i]);
	getch();
}

