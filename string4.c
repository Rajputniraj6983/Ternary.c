#include<stdio.h>
#include<string.h>
main(){
	
	char a[10];
	short count = 0;
	
	printf("enter the string");
	scanf("%s",&a);
	
	printf("string given is : %s",a);
	
	for(short i=0;a[i]!='\o';i++){
		count++;
	}
	
	char rev[count-1];
	short j=0;
	
	for (short i=count-1;i>=0;i--){
		rev[j] = a[i];
		j++;
	}
	printf("\n\nreversed string is : %s",rev);
}