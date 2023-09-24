#include<stdio.h>
void main(){
	
	int num, counter = 0;
	printf("enter the value of number :");
	scanf("%d ",&num);
	
	while(num > 0){
		counter++;
		num/10;
		
	}
	printf("there are %d digits in given number!",counter);
	
	
	
	
	
	
}