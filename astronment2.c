#include<stdio.h>
main(){
	
	int n;
	int average = 0;
	
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	short a[n];
	
	printf("enter the element of a : \n");
	 for (short i = 0; i < n; i++){
	 
	     printf("enter the value of a[%d] :",i);
	     scanf("%d",&a[i]);
	     
    }
	
	printf("array elements in asscending order : \n ");
		for (short i = 0; i < n; i++){
			
			for (short j = 0; j < n; j++){
				
				if(i == j){
					continue;
				}
				else{
					if (a [i] > a[j]){
						
				    a[i] = a[i] + a[j];
				    a[i] = a[i] - a[j];
				    a[i] = a[i] - a[j];
					}
				}
			}
	      for (short i = 0; i < n; i++){
	      	
	      	printf("\na[%d] = %d ",i ,a[i]);
	      	
		  }		
		
		}
	  
}