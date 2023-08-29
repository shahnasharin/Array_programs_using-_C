/*
 ============================================================================
 Name        : Find.c
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

	int i,limit,a[50],sum = 0;

	printf("Enter the Size Of Limit : ");
	scanf("%d",&limit);

	printf("Enter the Array Elements : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		sum = sum + a[i];
	}

	printf("Your Entered Sum Is : %d",sum);



	return EXIT_SUCCESS;
}
