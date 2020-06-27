/* Write a program in C to sort elements of the array in descending order*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int arr[100];
    int n, i, j, tmp;
	clrscr();
	printf("\n\nsort elements of array in descending order :\n");
	printf("Input the size of array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
	
    for(i=0;i<n;i++){
	    printf("element - %d : ",i);
	    scanf("%d",&arr[i]);
	}

    for(i=0; i<n; i++){

	for(j=i+1; j<n; j++){

	    if(arr[i] < arr[j]){
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	    }
	}
    }

	printf("\nElements of array is sorted in descending order:\n");
    for(i=0; i<n; i++)
	printf("%d  ", arr[i]);

	getch();
}