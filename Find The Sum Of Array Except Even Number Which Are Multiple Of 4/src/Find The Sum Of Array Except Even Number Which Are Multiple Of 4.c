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

	int i,j,limit;
	int a[100],sum = 0;
	printf("Enter the Size OF Array : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array :");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 4 == 0){
			for (j = i; j < limit; j++) {
				(a[j] = a[j+1]);
			}
				limit--;
				i--;
		}
	}
			for (i = 0; i < limit; i++) {
					sum = sum + a[i];
			}
		printf("Your Results Is : %d",sum);

	return EXIT_SUCCESS;
}
