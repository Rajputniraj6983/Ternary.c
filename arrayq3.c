#include<stdio.h>
main(){
	short n;
	int sum = 0;
	
	printf("enter the value of array 1 : ");
	scanf("%d",&n);

	
	int a[n];
	printf("enter the value of array a: \n ");
	for(int i = 1;i < n;i++){
		printf("enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	int b[n];
	printf("enter the value of array b: \n ");
	for(int i = 1;i < n;i++){
		printf("enter the value of b[%d] :",i);
		scanf("%d",&a[i]);
		sum += b[i];
	} 
    int c[n];
    printf("\n\nEelement of Array c : ");
    for (int i = 0; i < n; i++){
		printf("%hi", c[i] = a[i] + b[i]);
		if (i < n-1)
		printf(", ");
		
	}




}