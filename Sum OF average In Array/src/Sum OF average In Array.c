/*
 ============================================================================
 Name        : Sum.c
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
	int sum = 0,average = 0;;

	printf("Enter the Size Of Array : " );
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		sum = sum + a[i];
	}

	average = sum/limit;

	printf("\nYour Sum Is : %d",sum);
	printf("\nEntered Sum OF Average Is :%d",average);



	return EXIT_SUCCESS;
}
