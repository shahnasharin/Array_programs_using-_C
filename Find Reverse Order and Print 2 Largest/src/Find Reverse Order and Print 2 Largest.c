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

	int i,limit,a[50],j,temp;

	printf("Enter the Size oF Array : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = limit-1; i >=0 ; i--) {
		printf("%d",a[i]);
	}

	for (i = 0; i < limit; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("\n%d",a[i]);
	}

	printf("\nYour Reversed And Second largest Is %d",a[limit-2]);

	return EXIT_SUCCESS;
}
