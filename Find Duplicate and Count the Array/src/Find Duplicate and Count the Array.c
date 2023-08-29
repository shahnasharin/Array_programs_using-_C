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

	int i,j,limit,a[50],flag,count = 0;

	printf("Enter the Array Size : ");
	scanf("%d",&limit);

	printf("enter the Element Of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag=0;
			for (j = i+1; j < limit; j++) {
				if(a[i] == a[j]){
					flag = 1;
					break;
			}
		}
	if(flag == 1){
		count++;
		printf("\n%d ",a[i]);
		}
	}
	printf("\nCounted Number Are : %d ",count);

	return EXIT_SUCCESS;
}
