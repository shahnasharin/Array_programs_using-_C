/*
 ============================================================================
 Name        : Reverse.c
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

	int i,a[50],limit;
	int temp;

	printf("Enter the Size Of element : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit/2; i++) {
		temp = a[i];
		a[i] = a[limit-i-1];
		a[limit-i-1] = temp;
	}

	printf("Your Reversed Elements Are : ");
	for (i = 0; i < limit; i++) {
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
