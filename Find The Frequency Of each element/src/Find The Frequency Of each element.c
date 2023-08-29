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

	int limit;
	int i,j,a[50];
	int freq = 0;

	printf("Enter the Size Of Array : ");
		scanf("%d",&limit);

	printf("\nEnter the element Of array : ");
	for (i = 0; i < limit; i++) {
		scanf("%d",&a[i]);
	}

	printf("Frequency of each Elements Of the Array : \n");
	   for(i = 0; i < limit; i++){
	       if(a[i] != -1){
	          freq = 1;
	       for(j = i+1; j < limit; j++){
	    	   if(a[i] == a[j]){
	        	  freq++;
	        	  a[j] = -1;
	    	   	   }
	       	   }
	    printf("%d : %d \n",a[i],freq);
	       }
	  }

	return EXIT_SUCCESS;
}
