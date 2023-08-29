/*
 ============================================================================
 Name        : Write.c
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

	int i,j,limit,a[50],temp,k;

	printf("Enter the Size Of Array ");
	scanf("%d",&limit);

	printf("Enter the element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}


	for (i = 0; i < limit-1; i++) {
		for (j=i+1;j<limit;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nSorted elements Are : ");
	for (i = 0; i < limit; i++) {
		printf("\n%d",a[i]);
	}

	for (i = 0; i < limit; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] == a[j]){
				for (k = j; k < limit; k++) {
					a[k] = a[k+1];
				}
				limit--;
				i--;
			}
		}
	}
	printf("\nDuplicated Deleted Are : ");
		for (i = 0; i < limit; i++) {
			printf(" %d ",a[i]);
	}

	printf("\n2nd Element Of Second Smallest Element : %d",a[1]);

	return EXIT_SUCCESS;
}
