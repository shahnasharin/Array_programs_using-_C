/*
 ============================================================================
 Name        : Sort.c
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

	int i,j,limit;
	int a[100],temp,k;


	printf("Enter the Size OF Array : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i <= limit-1; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < limit; i++) {

		for (j = i+1; j < limit; j++) {
			if(a[i] == a[j]){
				for (k = j; k < limit; k++) {
				(a[k] = a[k+1]);
				}
			limit--;
			i--;
			}
		}
	}

	printf("Your Removed Duplicate Elements are  : ");
	for (i = 0; i < limit; i++) {
		printf("%d",a[i]);
	}




	return EXIT_SUCCESS;
}
