/*
 ============================================================================
 Name        : Replace.c
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

	printf("Enter the Element Of Array :");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 1; j <= a[i]; j++) {
			if(a[i] % j == 0){
				flag ++;

		}
	}
	 if(flag == 2){
			printf("1");
	 	 }else{
			printf("0");
		}
	}



	return EXIT_SUCCESS;
}
