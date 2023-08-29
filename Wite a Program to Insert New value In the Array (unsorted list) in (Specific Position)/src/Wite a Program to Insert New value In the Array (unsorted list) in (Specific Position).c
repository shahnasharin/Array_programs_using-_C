/*
 ============================================================================
 Name        : Wite.c
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

	int i,j,temp;
	int limit,a[50];
	int position,value;

	printf("Enter the Array Size  : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	printf("Enter the Location Where You Wish to Insert : ");
	scanf("%d",&position);

	printf("Enter the Values to Insert : ");
	scanf("%d",&value);

	for (i = limit-1; i >= position-1; i--) {
		a[i+1] = a[i];
	}

	a[position-1] = value;

	printf("\nInserted Element Is : ");
	for (i = 0; i <= limit; i++) {
		printf("%d ",a[i]);
	}

	for (i = 0; i < limit-1; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nSorted Insertion Results Is : ");
		for (i = 0; i <= limit; i++) {
			printf("%d ",a[i]);
		}




	return EXIT_SUCCESS;
}
