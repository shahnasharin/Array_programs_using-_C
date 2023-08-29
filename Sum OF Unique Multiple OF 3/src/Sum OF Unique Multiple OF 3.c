/*
 =========================================================================	===
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

	int i,j,n;
	int array[100],flag = 0;
	int sum = 0;;

	printf("Enter The Array SIze : ");
	scanf("%d",&n);

	printf("Enter The Elements Of Array : ");
	for (i = 0; i < n; i++) {
		scanf("%d",&array[i]);
	}

	printf("Your Results Is : ");
	for (i = 0; i < n; i++) {
		flag = 0;
		for (j = 0; j < n; j++) {
			if(i != j){
				if(array[i] == array[j]){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0){
			if(array[i] % 3 == 0){
				sum = sum + array[i];
			}
		}
	}
	printf("%d",sum);

	return EXIT_SUCCESS;
}
