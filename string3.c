#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("enter the name:");
	scanf("%s",&a);
	int palindrom=1;
	for(i = 0;i < x;i++)
	{
		if(a[i]!=a[x-i-1])
		{
			palindrom=0;
			break;
		}
	}
	if(palindrom)
	{
		printf("this is palindrom");
	}
	else
	{
		printf("this is  not palindrom");
	}
}