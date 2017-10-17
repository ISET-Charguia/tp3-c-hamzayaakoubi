/*
 ============================================================================
 Name        : tp3ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int largeur,longeur,i,j;
	printf("entrez les valeur de langeur et largeur :");
	scanf("%d,%d",&longeur,&largeur);

	for(i=0;i<largeur;i++)
	{
		for(j=0;j<longeur;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
