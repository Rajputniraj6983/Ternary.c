#include<stdio.h>
void main(){

	short n, sum = 0, min;
	char flag = 'y';
	
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	short a[n];
	
	//Element of a
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%d] : ",i);
		scanf("%d", &a[i]);
			
	}
	
	
	printf("\n\n Prime elements are : ");
	for (short i = 0; i < n; i++){	
		
		flag = 'y';
			
		for(short divisor = 2; divisor <= a[i]; divisor++){
			
			if(divisor == a[i])
				continue;
			else {
					
				if(a[i] % divisor == 0){
					
					flag = 'n';
					break;
						
				} else 
					flag = 'y';
	
			}
		
		}
		
		if(flag == 'y'){
			
			printf("%d ", a[i]);
			sum += a[i];
			
		}
			
	}	
	
	
	printf("\n\nsum of prime elements : %d", sum);

}
