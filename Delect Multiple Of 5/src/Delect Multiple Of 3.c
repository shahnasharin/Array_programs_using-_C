/*
 ============================================================================
 Name        : Delect.c
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
	int a[100];
	int n;

	printf("Enter the Array size : ");
	scanf("%d",&n);

	printf("Enter the Elements Of array : ");
	for (i = 0; i < n; i++) {
		scanf("%d",&a[i]);

	}

	for (i = 0; i < n ; i++) {
		if(a[i] % 5 == 0){
			for (j = i; j < n; j++) {
				a[j] = a[j+1];
			}

			n--;
			i--;

		}
		printf("%d ",a[i]);
	}


	printf("Deleted Elements & Multiple Of 5 : \n");
	for (i = 0; i < n; i++) {
		printf("%d",a[i]);
	}



	return EXIT_SUCCESS;
}
