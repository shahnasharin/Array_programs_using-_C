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

	int i,limit,a[50];

	printf("Enter the Size Of Array : ");
			scanf("%d",&limit);

	printf("\nEnter The Element Of Array : ");
		for (i = 0; i < limit; i++) {
			scanf("%d",&a[i]);
	}

	printf("Your Results Is : ");
	for (i = limit-1; i >= 0; i--) {
		if(a[i] % 2 == 0){
			printf("%d ",a[i]);
		}else{
			printf("& ");
		}
	}

	return EXIT_SUCCESS;
}
