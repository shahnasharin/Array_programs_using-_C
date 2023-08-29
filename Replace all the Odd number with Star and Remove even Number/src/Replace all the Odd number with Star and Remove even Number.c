/*
 ============================================================================
 Name        : Replace.c
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

	int i,j,limit,a[50];

	printf("Enter the Size Of Array : ");
		scanf("%d",&limit);

	printf("Enter the Element Of Array :");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 2 == 1){
			printf("*");
		}else{
			for (j = i; j < limit; j++) {
				a[j] = a[j+1];
			}
			limit--;
			i--;
		}
	}

	return EXIT_SUCCESS;
}
