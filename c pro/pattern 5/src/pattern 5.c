/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			{if(i==j)
			printf("* ");
			else
				printf("  ");}
		for(j=i;j<=4;j++)
		{
		if(i==1)
			printf("* ");
		else
			printf("  ");
		}
		for(j=1;j<i;j++)
			{if(j==i-1||i==5)
				printf("* ");
			else
				printf("  ");
			}

	printf("\n");
	}

	return EXIT_SUCCESS;
}
