/*
 ============================================================================
 Name        : tp3ex1(do.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,fact,i;
			printf("donner un entier positif :");
			scanf("%d",&n);
			fact=1;
			i=1;
			do
			{
			i++;
			fact=fact*i;
			}while(i<=n);
			printf("%d",fact);


}
