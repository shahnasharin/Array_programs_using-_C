/*
 ============================================================================
 Name        : Mock.c
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

	int i,j,k,limit,a[50];

	printf("Enter the Size Of Array : ");
			scanf("%d",&limit);

		printf("Enter the Element Of Array : ");
		for (i = 0; i < limit; i++) {
			scanf("%d",&a[i]);
		}

		for(i = 0; i < limit-2; i++){
			if(a[i] % 2 == 0){
				for(k = 1 ;k <= 2; k++){
					for(j = i; j < limit-1; j++){
						a[j+1] = a[j+2];
					}
				limit = limit -1;
				}
			}
		}

	for (i = 0; i < limit; i++) {
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;


}
