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
	int flag,count = 0,sum = 0;

	printf("Enter the Array Size : ");
		scanf("%d",&limit);

	printf("Enter the Element of Array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		flag = 0;
		for (j = i+1; j < limit; j++) {
			if(i != j){
			if(a[i] == a[j]){
					flag = 1;
					break;
				}
			}
		}

	if(flag == 0){
		count++;
		sum = sum + a[i];
		}
	}
		printf(" count of unique elements: %d ",count);
		printf("\n sum of unique elements: %d",sum);

	return EXIT_SUCCESS;
}
