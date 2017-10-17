/*
 ============================================================================
 Name        : tp3ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x,diviseur,i;
do
{
	printf("donner une entier postif ");
	scanf("%d",&x);
}while(x<0);

for(i=1;i<x;i++)
{
	if(x%i==0)
	{
		diviseur++;
	}
}
if(diviseur<2)
{
	printf("permier");

}else

{
	printf("non premier");
}
return 0;
}
