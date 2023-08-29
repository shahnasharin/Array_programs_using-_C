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

	int i,j,limit,flag,a[50];


	printf("Enter the Array Size : ");
	scanf("%d",&limit);

	printf("Enter the Element Array Is : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 2; j < a[i]; j++) {
			if(a[i] % j == 0){
				flag ++;
				break;
			}
		}

	if(flag == 0){
		for (j = i; j <= limit; j++) {
			a[j + 1] = a[j + 3];
			a[j + 2] = a[j + 4];
		}
			limit = limit - 2;
	}
	}

	for (i = 0; i < limit; i++) {
		if(a[i] % 2 == 0){
			printf("0 ");
		}else{
			printf("%d ",a[i]);
		}
	}

	return EXIT_SUCCESS;
}
