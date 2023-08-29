/*
 ============================================================================
 Name        : Mock.c
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

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] %  3 == 0){
			a[i] = 10;
		}
		printf("%d ",a[i]);
	}





	return EXIT_SUCCESS;
}
