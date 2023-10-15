#include<stdio.h>
#include<stdio.h>

int findLength(char str[]);

void main(){

	char str[20];
	
	printf("Enter the String : ");
	gets(str);
	
	printf("\nLength of String is : %d", findLength(str));

}


int findLength(char str[]){

	int length = 0;
	
	for (short i = 0; str[i] != '\0'; i++)
		length++;
		
	return length;

}