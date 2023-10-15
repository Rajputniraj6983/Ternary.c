#include<stdio.h>

int sumOfArray(int a[], int n);

void main(){

	int n;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	int a[n];
	
	//getting array values from user
	printf("Enter Array elements :\n");
	for (short i = 0; i < n; i++){
	
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	
	}

	printf("sum of array is : %d", sumOfArray(a, n));

}


int sumOfArray(int a[], int n){

	int sum = 0;
	for (short i = 0; i < n; i++)
		sum += a[i];
		
	return sum;
}