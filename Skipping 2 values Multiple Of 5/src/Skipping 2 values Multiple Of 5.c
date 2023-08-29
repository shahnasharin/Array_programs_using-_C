/*
 ============================================================================
 Name        : Skipping.c
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

	printf("Enter the Size of Array : ");
	scanf("%d",&limit);

	printf("Enter the element of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 5 == 0){
			printf("%d ",a[i]);
			i = i + 2;
		}else{
			printf("%d ",a[i]);
		}
	}



	return EXIT_SUCCESS;
}
