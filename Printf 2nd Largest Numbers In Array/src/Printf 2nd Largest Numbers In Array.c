/*
 ============================================================================
 Name        : Printf.c
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

	int i,limit,a[100],l1,l2;

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter The Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	l1 = INT_MIN;
	l2 = INT_MIN;

	for (i = 0; i < limit; i++) {
		if(a[i] > l1){
			l2 = l1;
			l1 = a[i];
		}
		if(a[i] > l2 && a[i] < l1){
		l2 = a[i];
		}
	}
	printf("\nSecond Largest Number in Array : %d",l2);


	return EXIT_SUCCESS;
}
