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

	int i,limit1,limit2;
	int a[50],b[50];
	int count=0;

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit1);

	printf("Enter the Elements Of Array 1 : ");
	for (i = 0; i < limit1; i++) {
		scanf("%d",&a[i]);
	}

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit2);

	printf("Enter the Elements Of Array 2 : ");
	for (i = 0; i < limit2; i++) {
		scanf("%d",&b[i]);
	}

	for (i = 0; i < limit2; i++) {
		a[limit1] = b[i];
		limit1++;
	}

	printf("\nYour Merged Element Is : ");
	for (i = 0; i < limit1; i++) {
		printf("%d ",a[i]);
	}

	for (i = 0; i < limit1; i++) {
		if(a[i] == 1){
			count++;
			}
		}

	printf("\n%d",count);


	return EXIT_SUCCESS;
}
