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

	int i,j;
	int limit1,limit2;
	int a[50],b[50];
	int flag,count=0;


	printf("Enter the size Of Array : ");
	scanf("%d",&limit1);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit1; i++) {
		scanf("%d",&a[i]);
	}

	printf("Enter the size Of Array : ");
		scanf("%d",&limit2);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit2; i++) {
		scanf("%d",&b[i]);
	}

	for (i = 0; i < limit2; i++) {
		a[limit1] = b[i];
			limit1++;
	}

	printf("\nEnter the Element Of Array : ");
		for (i = 0; i < limit1; i++) {
		printf("%d ",a[i]);
	}

	for (i = 0; i < limit1; i++) {
				flag = 0;
	for (j = 2; j < a[i]; j++) {
			if(a[i] % j == 0){
			flag = 1;
			break;
		}
	}
		if(flag == 0 && a[i] != 1){
			count++;
			printf("\n%d ",a[i]);
		}
	}





	printf("\nCounted Number Are : %d ",count);




	return EXIT_SUCCESS;
}
