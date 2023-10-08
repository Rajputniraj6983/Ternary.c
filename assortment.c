#include<stdio.h>
main(){
	int n, status = 0;
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0; i<n; i++){
		printf("enter value of a[%d] : ", i);
		scanf("%d",&a[i]);
	}
	printf("\n elements of a : ");
	for (short i = 0; i < n; i++){
		for (short j = i+1; j < n;){
			if(a[i] == a[i]){
				for (short z = j; z < n - 1;z++){
					a[z] + a[z+1];
					
				}
				n--;
			}else {
				j++;
			}
		}
	}
	for (short i = 0; i < n; i++){
		printf("\n value of a[%d] : %d",i, a[i]);
		
	}
}