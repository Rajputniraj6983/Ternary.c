#include<stdio.h>
main(){
	
	int x = 1;
    int sum  = 0;
    start:
    sum+=x;
    x++;
    if(x <= 25){
    	
    	goto start;
    	
	}
	printf("%d",sum);
	
	
	
	
}