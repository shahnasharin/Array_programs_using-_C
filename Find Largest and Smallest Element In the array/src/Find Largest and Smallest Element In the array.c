/*
 ============================================================================
 Name        : Test1.c
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

	int i,limit;
	int a[50];
	int small,large;


	printf("Enter the Size OF Array : ");
		scanf("%d",&limit);

	printf("\nEnter the Elements Of Array 1 :");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

		small =  a[0];
		large =  a[0];

	for (i = 0; i < limit; i++) {
		if(a[i] > large){
			large = a[i];
		}if(a[i] < small){
			small = a[i];
		}
	}

	printf("\nSmallest the Elements Of Array Is : %d",small);
	printf("\nLargest the Elements Of Array Is : %d",large);

	return EXIT_SUCCESS;
}
