/* QuickSort */
#include<stdio.h>
#include<conio.h>
int partition(int arr[],int lb,int ub){
	int piv,tmp,start,end;
	piv=arr[lb];
	start=lb;
	end=ub;
	while(start<end){
		while(arr[start]<=piv)
			start++;
		while(arr[end]>piv)
			end--;
		if(start<end){
			tmp=arr[start];
			arr[start]=arr[end];
			arr[end]=tmp;
		}
		tmp=arr[lb];
		arr[lb]=arr[end];
		arr[end]=tmp;
	}
	return end;
}

void quickSort(int arr[],int lb,int ub){
	int pos;
	if(lb<ub){
		pos=partition(arr,lb,ub);
		quickSort(arr,lb,pos-1);
		quickSort(arr,pos+1,ub);
	}
}

int main(){
	int arr[] = {10,7,8,9,1,5},i; 
	clrscr();
	quickSort(arr, 0, 5);
	printf("Sorted Array:\t");
	for(i=0;i<=5;i++)
		printf("%d\t",arr[i]);
	getch();
  	return 0;
}