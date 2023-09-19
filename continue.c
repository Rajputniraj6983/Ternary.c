#include<stdio.h>
main(){
	
	int x;
	x = 1;
	start:
	if(x == 8){
		goto sum;
	}
	printf("%d ",x);
	sum:
	x++;
	
	if(x <= 10){
		
		goto start;
		
		
	}
	
	
	
	
}