/*
 ============================================================================
 Name        : tp3ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,r,pgcd;
	do
	{
	printf("donner les valeurs de a et b : ");
	scanf("%d,%d",&a,&b);
	}while((a<=b)||(a==0)||(b==0));
	r=a%b;
	if(r==0)
	{
		pgcd=b;
	}else
	{
		while(r!=0)
		{
			a=b;
			b=r;
			pgcd=a;
		}
	}
	printf("%d",pgcd);
	return 0;
}
