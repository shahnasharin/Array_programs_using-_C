/*
 ============================================================================
 Name        : Delete.c
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

	int i,j,k,limit;
	int a[50];

	printf("Enter the size Of array : ");
	scanf("%d",&limit);

	printf("Enter the Elements Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] == a[j]){
		for (k = i; k < limit; k++) {
			a[k] = a[k+1];

			}
		limit--;
		i--;
		}
	}
}

	printf("Your Deleted Elements Are : ");
	for (i = 0; i < limit; i++) {
		printf("%d ",a[i]);
	}


	return EXIT_SUCCESS;
}
