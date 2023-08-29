/*
 ============================================================================
 Name        : Sort.c
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

	int i,j;
	int a[100],limit = 6;
	int flag,count = 0,temp;

	printf("Enter the Element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit-1; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 0; j < limit; j++) {
			if(i != j){
				if(a[i] == a[j]){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0){
			count++;
		}
	}
	printf("Your counted Number Are : %d",count);

	return EXIT_SUCCESS;
}
