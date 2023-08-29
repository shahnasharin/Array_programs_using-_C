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

	int i,j,temp;
	int limit1,limit2,limit3;
	int a[50],b[50],merge[100];


	printf("Enter The Array Size : ");
	scanf("%d",&limit1);

	printf("Enter the Elements of Array 1 : ");
	for (i = 0; i < limit1; i++) {
		scanf("%d",&a[i]);
	}

	printf("Enter The Array Size : ");
	scanf("%d",&limit2);

	printf("Enter the Elements of Array 1 : ");
	for (i = 0; i < limit2; i++) {
		scanf("%d",&b[i]);
	}

	limit3 = limit1 + limit2;

	for (i = 0; i < limit1; i++) {
		merge[i] = a[i];
	}

	for (i = 0; i < limit2; i++) {
		merge[limit1 + i] = b[i];
	}

	for (i = 0; i < limit3; i++) {
			for (j = i+1; j < limit3; j++) {
				if(merge[i] < merge[j]){
					temp = merge[i];
					merge[i] = merge[j];
					merge[j] = temp;
				}
			}
		}

		printf("Your Sorted Merged Elements Are : ");
		for (i = 0; i < limit3; i++) {
			printf("%d ",merge[i]);
		}

	return EXIT_SUCCESS;
}
