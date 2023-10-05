#include<stdio.h>

void main(){

	short n, m;
	
	
	
	printf("Enter size of row : ");
	scanf("%hi", &n);

	printf("Enter size of column : ");
	scanf("%hi", &m);
	
	short a[n][m];
	
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
		
		printf("\nEnter value of a[%hi][%hi] : ", i, j);
		scanf("%hi", &a[i][j]);
		
		}
	
	}

	
	printf("\n\nElements of 2D array\n");
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
		
			printf("\na[%hi][%hi] = %hi", i, j, a[i][j]);
		
		}
	
	}
}