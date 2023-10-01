#include<stdio.h>
main(){
	 
	for (short i = 1; i <= 5; i++){
	
		for(short j = 1; j <= i; j++)
			printf("%hi ", j);

		printf("\n");
	}
}