/*
 ============================================================================
 Name        : Test1.c
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

	int i,j,limit;
	int a[50],b[50],c[50];
	int flag,m = 0,p = 0;


	printf("Enter the Array Size : ");
	scanf("%d",&limit);

	printf("enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = 2; j < a[i]; j++) {
			if(a[i] % j == 0){
				flag ++;

			}
		}
	if(flag == 0){
		c[m] = a[i];
		m++;
		}else{
		b[p] = a[i];
		p++;
			}
	}

	printf("\nPrime Number Of Array Is : ");
	for (i = 0; i < m; i++) {
		if(a[i]!=1){
		printf("%d ",c[i]);
		}
	}
	printf("\nNon prime Number Of Array Is : ");
	for (i = 0; i < p; i++) {
		printf("%d ",b[i]);
	}

	return EXIT_SUCCESS;
}
