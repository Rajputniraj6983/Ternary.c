#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("enter your name : ");
	scanf("%s",&name);
	
	int length = 0;
	int i;
	for(i=0;i<20;i++)
	{
		if(name[i]!='\0')
		{
			length ++;
		}
	}	
	printf("%d",length);
}