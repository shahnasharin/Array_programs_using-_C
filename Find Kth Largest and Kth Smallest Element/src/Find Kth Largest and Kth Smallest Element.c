/*
 ============================================================================
 Name        : Find.c
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

	int i,j,k,a[50],limit,temp;

	printf("Enter the Size Of Array : ");
		scanf("%d",&limit);

	printf("\nEnter The Element Of Array : ");
		for (i = 0; i < limit; i++) {
			scanf("%d",&a[i]);
	}

	printf("\nEnter the Value Of K to Find The Smallest and Largest : ");
		scanf("%d",&k);

	for (i = 0; i < limit; i++) {
		for (j = i+1; j <= limit; j++) {
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%d\n",a[i]);
	}

	printf("\n The KTh Smallest element Is : %d\n",a[k-1]);

		printf("\n The KTh Largest element Is : %d\n",a[limit-k]);



	return EXIT_SUCCESS;
}
