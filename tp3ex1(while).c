/*
 ============================================================================
 Name        : tp3ex1(while).c
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
		i=1;
		fact=1;
		while(i<=n)
		{
			i++;
			fact=fact*i;
		}
		printf("%d",fact);
}
