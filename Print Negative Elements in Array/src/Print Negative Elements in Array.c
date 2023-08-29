/*
 ============================================================================
 Name        : Print.c
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

	int i,a[100],limit;

	printf("Enter the Array Size : ");
	scanf("%d",&limit);

	printf("Enter the Element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		if(a[i] < 0){
			printf("%d",a[i]);
		}
	}



	return EXIT_SUCCESS;
}
