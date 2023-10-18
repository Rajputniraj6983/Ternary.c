#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("enter the name:");
	scanf("%s",&a);
	int len= strlen(a);
	int i;
	for(i = 0;i < len;i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			printf("%c",a[i]);
		}
	}
}