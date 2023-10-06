#include<stdio.h>
void main(){

	short n;
	float average = 0;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n], b[n], c[n];
	

	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);	
	}
	
	printf("\n\nArray elements in ascending order :\n\n");
	
	for (short i = 0; i < n - 1; i++){
		
		for (short j = 0; j < n - 1; j++){
		
			if (i == j){
	
				continue;
		
			} else {
			
				if (a[i] < a[j]){
				
					a[i] = a[i] + a[j];
					a[j] = a[i] - a[j];
					a[i] = a[i] - a[j];
				
				}
			
			}
		
		}

	
		
	}
	
	
	for (short i = 0; i < n; i++){
		printf("\na[%hi] = %hi ", i, a[i]);	
		
	}
	
	
}