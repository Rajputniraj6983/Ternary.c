#include<stdio.h>
void main(){
	
	short n;
	int sum = 0;
     
	printf("enter the value of array 1 : ");
	scanf("%d",&n);
	
	short a[n], b[n], c[n];
	
//	int a[n];
	printf("enter the value of array a : \n ");
	for (short i = 1; i < n; i++){
		printf("enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
//	int b[n];
	printf("enter the value of array b : \n ");
	for (short i = 1;i < n;i++){
		printf("enter the value of b[%d] :",i);
		scanf("%d",&b[i]);
		sum += a[i];
		
}
		
//	int	c[n];
	printf("\n\nEelement of Array c : ");
	for (short i = 0; i < n; i++){
	
			printf("%d", c[i] = a[i] + b[i]);
			
			if (i < n-1)
				printf("  ");
		
		
	} 
	 
	
	 
	 	
}
