#include<stdio.h>
#define pf printf
#define sf scanf

void main(){
	
	short p,q,r,s;
	
	printf("enter the value of P :");
	sf ("%hi",&p);
	
	printf("enter the value of q :");
	sf("%hi",&q);
	
	printf("enter the value of r :");
	sf("%hi",&r);
	
	printf("enter the value of s :");
	sf("%hi",&s);
	
	(p>q) ? (p>r) ? (p>s) ? pf("p is maximum"):pf("s is maximum"): (r>s) ? pf("r is maximum"):pf("s is maximum"): (q>r) ? (q>s) ? pf("q is maximum"):pf("s is maximum"): (r>s) ? pf("r is maximum"):pf("s is maximum");
	
	
	
}