/*
 ============================================================================
 Name        : Merge.c
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

	int i;
	int limit1,limit2;
	int a[50],b[50];


	printf("Enter the Size OF Array : ");
	scanf("%d",&limit1);

	printf("\nEnter the Elements Of Array 1 :");
	for (i = 0; i < limit1; i++) {
		scanf("%d",&a[i]);
	}

	printf("Enter the Size Of array : ");
	scanf("%d",&limit2);

	printf("\nEnter The Elements Of Array : ");
	for (i = 0; i < limit2; i++) {
		scanf("%d",&b[i]);
	}

	for (i = 0; i < limit2; ++i) {
			a[limit1] = b[i];
				limit1++;
		}

	printf("\nMerged Elements Are :");
	for (i = 0; i < limit1; i++) {
		printf("%d ",a[i]);
	}



	return EXIT_SUCCESS;
}
