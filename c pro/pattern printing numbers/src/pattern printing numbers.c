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
	int i,j,rows;
	printf("enter number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++);
	{
		for(j=1;j<=rows;j++)
		{
			if((i+j)<=rows)
				printf(" ");
		}else
		printf("*");
		}
		printf("\n")
	}
	return EXIT_SUCCESS;
}
