/*How do you find the largest and smallest number in an unsorted integer array*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int b[11]={475,34,65,34,69,3,6,94,65,22,'\0'},smallest,largest,len=0,i;
	clrscr();
	for(i=0;b[i]!='\0';i++){
		len++;
	}
	printf("Length of Array:%d\n",len);
	smallest=largest=b[0];                      2
	for(i=0;i<len-1;i++){
		if (b[i]>largest){
			largest=b[i];
			//printf("Large:%d\n",largest);
		}
		else if (b[i]<smallest){
			smallest=b[i];
			//printf("Small:%d\n",smallest);
			}
	}
	printf("Smallest Number of Array:\t%d\nLargest Number of Array:\t%d",smallest,largest);
	getch();
}