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

	int i,j,k,limit,a[50];
	int temp,flag;

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter the Element : ");
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

	printf("\nSorted elements Are : ");
	for (i = 0; i < limit; i++) {
		printf("%d",a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 2 ; j < a[i]; j++) {
			if(a[i] % j == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			for (k = i; k < limit; k++) {
				a[k] = a[k+1];
			}
			limit--;
			i--;
		}
	}

	printf("\nDeleted prime Number Is : ");
	for (i = 0; i < limit; i++) {
		printf("%d",a[i]);
	}

	printf("\nReplaced Odd as Star : ");
	for (i = 0; i < limit; i++) {
		if (i % 2 == 0){
			printf("*");
		}else{
			printf("%d",a[i]);
		}
	}


	return EXIT_SUCCESS;
}
