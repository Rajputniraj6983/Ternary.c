#include<stdio.h>

int main(){


	unsigned short int baseSalary = 100, HRA = 25, DA = 52, TA = 9;
	
	printf("Gross Salary = %hu",(baseSalary + HRA + DA + TA));
	
	return 0;
}