#include<stdio.h>
void main(){
	
	int x,y;
	
	printf("enter the value of x ");
	scanf("%d",&x);
	
	printf("enter the value of y ");
	scanf("%d",&y);
	
	printf("\nbefore swaping \nx = %hu \ny = %hu",x, y);
	
	x = x + y;
	x = x - y;
    x = x - y;
    
    printf("\nafter swaping \nx = %hu \ny = %hu",x, y);
    
    return 0;
    
}