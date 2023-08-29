/*
 ============================================================================
 Name        : Print.c
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

	int i,j,limit,a[50],temp;

	printf("Enter the Size Of Array :");
	scanf("%d",&limit);

	printf("Enter the Element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
			for (j = i+1; j < limit; j++) {
				if(a[i] > a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}

	printf("Printed Zeros To Front are : ");
	for (i = 0; i < limit; i++) {
		printf("%d",a[i]);
	}

	return EXIT_SUCCESS;
}
