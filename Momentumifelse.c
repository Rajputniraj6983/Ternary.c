#include<stdio.h>
#define pf printf
#define sf scanf
void main(){
	
	short num1,num2,num3,num4;
	
	pf("enter the value of num1 : ");
	sf("%d",&num1);
	
	pf("enter the value of num2 : ");
	sf("%d",&num2);
	
	pf("enter the value of num3 : ");
	sf("%d",&num3);
	
	pf("enter the value of num4 : ");
	sf("%d",&num4);
	
	if (num1 > num2){
		 if (num1 > num3){
		 	if (num1 > num4){
		 		
		 	 pf("\nnum1(%hi) is minimum",num1);
                }

            } else {

                if(num3 > num4){
                    pf("\nnum3(%hi) is minimum",num3);
                } else {
                    pf("\nnum4(%hi) is minimum",num4);
                }
            }
        } else {

            if(num2 > num3){

                pf("\nnum2(%hi) is minimum",num2);
            } else {

                if(num3 > num4){
                    pf("\nnum3(%hi) is minimum",num3);
                } else {
                    pf("\nnum4(%hi) is minimum",num4);
                }
            }
        }
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
