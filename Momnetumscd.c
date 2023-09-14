#include<stdio.h>
#define sf scanf
#define pf printf

void main()
{
	char x;
	printf("enter the value of x : ");
	scanf("%c", &x);
	
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	printf("c is alphabet.",x);
	
	else if(x >= '0' && x <= '9')
    printf("c is digit.",x);
    
    else
    {
    	printf("c is character.",x);
	}
	
	
	
	
	
}