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
#include <limits.h>

int main(void) {
	setbuf(stdout,NULL);

	int i,limit,a[100],S1,S2;

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter The Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	S1 = INT_MAX;
	S2 = INT_MAX;

	for (i = 0; i < limit; i++) {
		if(a[i] < S1){
			S2 = S1;
			S1 = a[i];
		}
		if(a[i] < S2 && a[i] > S1){
		S2 = a[i];
		}
	}


	printf("\nSecond Largest Number in Array : %d",S2);


	return EXIT_SUCCESS;
}
