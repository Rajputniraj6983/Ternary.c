#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("enter the name:");
	scanf("%s",&a);
	int len= strlen(a);
	int i,count=0,sum=0;;
	for(i=0;i<len;i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			sum+=a[i];
			count++;
		}
	}
	printf("digit count :%d\n",count);
	printf("sum is %d",sum-48*len);
}