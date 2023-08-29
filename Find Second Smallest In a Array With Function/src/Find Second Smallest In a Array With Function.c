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

	int i,j,k,limit,a[50],temp;

	printf("Enter the Array Size : ");
	scanf("%d",&limit);

	printf("Enter the Element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit-1; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

				if(a[i] == a[j]){
			for (k = i; k < limit; k++) {
				a[k] = a[k+1];
				}
			limit--;
			i--;
			}
		}
	}

	printf("Your Second Smallest element Is : %d",a[1]);

	return EXIT_SUCCESS;
}
