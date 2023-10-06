#include<stdio.h>
void main(){

	short n;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n], b[n], c[n];
	
	
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);	
	}
	
		printf("\n\nEnter array elements of b :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of b[%hi] : ",i);
		scanf("%hi", &b[i]);	
		
	}
	

	printf("\n\nEelement of Array c : ");
	for (short i = 0; i < n; i++){
	
			printf("%hi", c[i] = a[i] + b[i]);
			
			if (i < n-1)
				printf(", ");
		
	}
	
}