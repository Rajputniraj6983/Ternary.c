#include<stdio.h>
main(){
	int num1,num2;
	printf("enter the value of num 1 : ");
	scanf("%d",&num1);
	
	printf("enter the value of num 2 : ");
	scanf("%d",&num2);
	
	if(num1 < num2){
	    num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;	
	}
       int n = num1 - num2;
       int a[n];
       printf("\n\nthe array is : ");
       
       short j = 0;
       
       for (int i = num2;i <= num1; i++){
       	if(i % 4 == 0){
       		a[j] = i;
       		j += 1;
		   }
	   }
	for(int i = 0;i < j; i++){
		printf("%d",a[i]);
	}
}