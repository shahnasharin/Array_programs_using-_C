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

	int i,limit,a[50],temp,j,k;

	printf("Enter the Size Of Array : ");
			scanf("%d",&limit);

	printf("\nEnter The Element Of Array : ");
		for (i = 0; i < limit; i++) {
			scanf("%d",&a[i]);
	}
	for (i = 0; i < limit; ++i) {
		for (j = i+1; j < limit; j++) {
			if(a[i] == a[j]){
				for (k = j; k < limit; k++) {
					a[k] = a[k + 1];
				}
				limit--;
				i--;
			}
		}
	}
		for (i = 0; i < limit; i++) {
				for (j = i+1; j < limit; ++j) {
					if(a[i] > a[j]){
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
		for (i = limit-1; i >= 0; i--) {
			printf("%d ",a[i]);
		}


	printf("\nResults Is  : %d",a[limit-2]);

	return EXIT_SUCCESS;
}
