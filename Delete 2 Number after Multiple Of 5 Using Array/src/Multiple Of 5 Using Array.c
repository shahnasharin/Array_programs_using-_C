/*
 ============================================================================
 Name        : Multiple.c
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
	int limit;
	int values[100];

	printf("Enter the Number of array : ");
	scanf("%d",&limit);

	printf("Enter the Values of array limit : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&values[i]);
	}

	for (i = 0; i < limit; i++) {
		if(values[i] % 5 == 0){
			for (j = i; j < limit; j++) {
				values[j+1] = values[j+3];
				values[j+2] = values[j+4];
			}
			limit = limit-2;
		}

	}

	printf("Results of Array Is :");
	for (i = 0; i < limit; i++) {
		printf("%d   ",values[i]);
	}


	return EXIT_SUCCESS;
}

