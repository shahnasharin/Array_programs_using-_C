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

	int i,j,limit,a[50],temp;

	printf("Enter the Size Of Array : ");
			scanf("%d",&limit);

	printf("\nEnter The Element Of Array : ");
		for (i = 0; i < limit; i++) {
			scanf("%d",&a[i]);
	}

	for (i = 0; i < limit; i++) {
		for (j = i+1; j < limit; j++) {
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}
	}

	printf("Your Results Is : ");
	for (i = 0; i < limit; i++)
	{
		if(a[i] % 2 == 0)
		{

			printf(" $ ");

		}
			else
			{
				printf(" %d ",a[i]);
			}
		}

	return EXIT_SUCCESS;
}
