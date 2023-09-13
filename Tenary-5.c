#include<stdio.h>
#define pf printf
#define sfscanf

void main(){
	
	short m,n,o,p,q;
	
	
	printf("enter the value of n :");
	sf("%hi",&n);
	
	printf("enter the value of o :");
	sf("%hi",&o);
	
	printf("enter the value of p :");
	sf("%hi",&p);
	
	printf("enter the value of q :");
	sf("%hi",&q);
	
	(m>n) ? (m>o) ? (m>p) ? (m>q) ? pf("m is maximum"):pf("q is maximum"): (p>q) ?pf("p is maximum"):pf("q is maximum"): (o>p) ? (o>q) ?pf("o is maximum"):pf("q is maximum"):(p>q) ? pf("p is maximum"):pf("q is maximum"): (n>o) ? (n>p) ? (n>q) ?pf("n is maximum"):pf("q is maximum"):(p>q) ? pf("p is maximum"):pf("q is maximum"):(o>p) ? (o>q) ?pf("o is maximum"):pf("q is maximum"): (p>q) ?pf("p is maximum"):pf("q is maximum");

	
	
	
	
	
	
	
}