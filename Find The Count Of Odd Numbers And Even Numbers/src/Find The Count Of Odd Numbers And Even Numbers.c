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

	int i,evenCount=0,oddCount=0;
	int a[50];
	int limit,sum = 0;


	printf("Enter the Array Limit : ");
	scanf("%d",&limit);

	printf("\nEnter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 2 == 0){
			sum = sum + a[i];
			evenCount++;
			printf("%d ",a[i]);
		}else{
			oddCount++;
			printf("\n%d ",a[i]);

		}
	}

	printf("\nAddition Of Even Number Is : %d",sum);

	printf("\nCounted Even Number Is : %d",evenCount);
	printf("\nCounted Odd Number Is : %d",oddCount);

	return EXIT_SUCCESS;
}
