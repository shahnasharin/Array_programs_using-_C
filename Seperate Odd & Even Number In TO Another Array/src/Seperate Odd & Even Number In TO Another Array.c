
/*
 ============================================================================
 Name        : Seperate.c
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

	int i,j = 0,k = 0;
	int limit,a[50],b[50],c[50];

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 2 == 0){
			b[j] = a[i];
			j++;
		}else{
			c[k] = a[i];
			k++;
		}
	}

	printf("\nYour Even Numbers Are : ");
	for (i = 0; i < j; i++) {
		printf("%d ",b[i]);
	}
	printf("\nYour  Odd Numbers Are : ");
	for (i = 0; i < k; i++) {
		printf("%d ",c[i]);
	}

	return EXIT_SUCCESS;
}
