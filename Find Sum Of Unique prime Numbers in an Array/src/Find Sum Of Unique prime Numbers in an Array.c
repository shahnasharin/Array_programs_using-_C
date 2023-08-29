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

	int i,j,limit,a[50];
	int flag,k;

	printf("Enter the Size OF Array : ");
	scanf("%d",&limit);

	printf("Enter the element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag=0;
		for (j = 2; j < a[i]; j++) {
			if(a[i] % j == 0){
				flag = 1;
				break;
			}
		}
	if(flag == 0 && a[i]!=1){

		for (k = 0; k < limit; k++) {
			if(a[i] == a[j]){
				flag = 1;
				break;
				}
			}
		}
		if(flag == 1 && i!= j){
			printf("%d",a[i]);
		}
	}


	return EXIT_SUCCESS;
}
