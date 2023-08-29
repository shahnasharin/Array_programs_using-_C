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

	int i,j;
	int a[50],limit = 8;
	int temp,count = 0;


	printf("Enter the Elements Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit-1; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Counted ' 0 ' Are : ");
	for (i = 0; i < limit; i++) {
		if(a[i] == 0){
			count++;
		}
	}
	printf("%d",count);

	return EXIT_SUCCESS;
}
