/*
 ============================================================================
 Name        : Alphabets.c
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

	char a[50];
	int size = 0;
	int i,j,temp;

	printf("Enter your Name : ");
	scanf("%s", a);

	for (i = 0; a[i]!='\0'; i++) {
		size++;
	}

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("your Sorted Name Is : ");
		for (i = 0; i < size; i++) {
			printf("%c",a[i]);
	}



	return EXIT_SUCCESS;
}
