#include<stdio.h>
main(){
	short n;
	float average = 0;
	
	printf("enter the value of array : ");
	scanf("%d",&n);
	
	short a[n];
	printf("enter the value of array: \n");
	
	for(short i = 1;i < n;i++){
		printf("enter the value of a[%hi] :",i);
		scanf("%d",&a[i]);
		average += a[i];
	}
	printf("average of array : %.1f", average /n);
	
	
	
}