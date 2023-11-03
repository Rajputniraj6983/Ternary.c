#include<stdio.h>
void main(){

	short n, max = 0, min;
	
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	short a[n];
	
	//Element of a
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%d] : ",i);
		scanf("%d", &a[i]);	
	}


	for (short i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];	
	
	
	printf("\n\nLargest value is : %d", max);

}
