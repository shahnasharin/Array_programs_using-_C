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

	int i,limit,a[50],check;

	printf("Enter the Size of limit");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	check = a[0];
	for (i = 1; i < limit; i++) {
		if(a[i] < check && a[i]!= 0){
			check = a[i];
		}
	}
	printf("Your closest To Zero Is %d",check);

	return EXIT_SUCCESS;
}
