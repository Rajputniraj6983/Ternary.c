#include<stdio.h>
main(){
	
	float celsius;
	printf("enter value of celsius : ");
	scanf("%f",celsius);
	printf("fahernit : %.2f\n\n",(celsius *9 / 5)+32);
	
	return 0;
}