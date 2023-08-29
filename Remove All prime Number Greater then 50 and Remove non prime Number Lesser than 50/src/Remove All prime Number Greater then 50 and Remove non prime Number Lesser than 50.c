/*
 ============================================================================
 Name        : Remove.c
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

	int i,j,limit,a[50];
	int flag;

	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 2; j < a[i]; j++) {
			if(a[i] % j == 0){
				flag = 1;
				break;
			}
		}

	if(flag == 0 && a[i] > 50){
		for (j = i; j < limit; j++) {
			a[j] = a[j + 1];
		}
		limit--;
		i--;

	}else if(flag == 1 && a[i] < 50){
		for (j = i; j < limit; j++) {
			a[j] = a[j + 1];
		}
		limit--;
		i--;
		}
	}

	printf("\nYour Results Is : ");
		for (i = 0; i < limit; i++) {
			if(a[i]!= 1){
		printf("%d ",a[i]);
	}
		}

	return EXIT_SUCCESS;
}
