/*
	2) with parameter and no return 	

*/

#include<stdio.h>
#include<conio.h>

void multi(a,b){
	int multi;
	multi = a * b;
	printf("\nSum : %d",multi);
}


void main()
{
	multi(4,5);
	getch();
}
