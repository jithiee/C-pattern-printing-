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
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=i;j<=5 ;j++){
        printf("%d",i);
			}
			printf("* ");

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
