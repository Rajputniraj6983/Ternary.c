#include<stdio.h>
main(){
	int x,n, factorial = 1;
	printf("enter value of n :");
	scanf("%d",&n);
	
	for(x = 1; x <= n; x++){
		factorial *=x;
		
	}
	printf("factorial of 1 to %d is : %d",n,factorial);
	
	
	
	
	
}