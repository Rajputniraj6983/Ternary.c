#include<stdio.h>
main(){
	long num, sum = 0, temp,remainder;
	printf("enter the value of number : ");
	scanf("%d",&num);
	temp = num;
	while(num > 0){
		remainder = num % 10;
		if(num == temp)
		sum += remainder;
		num = num/10;
	}
	sum += remainder;
	printf("sum of first and last digit of %d is : %ld",temp,sum);
	
	
	
	
}