/*
 ============================================================================
 Name        : Delete.c
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
	int limit,a[50];
	int k,temp;


	printf("Enter the Size Of Array : ");
	scanf("%d",&limit);

	printf("Enter the Elements Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] == a[j]){
				for (k = j; k < limit; k++) {
					(a[k] = a[k+1]);
				}
				limit--;
				i--;
			}
		}
	}

	for (i = 0; i < limit/2; i++) {
			temp = a[i];
			a[i] = a[limit-i-1];
			a[limit-i-1] = temp;
	}

	printf("Reversed Elements Are : ");
	for (i = 0; i < limit; i++) {
		printf("%d ",a[i]);
	}


	return EXIT_SUCCESS;
}
