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


	 int i,limit,a[100];

	 printf("Enter the Size OF Array : ");
	 	scanf("%d",&limit);

	 printf("Enter the element Of array : ");
	 for (i = 0; i < limit; i++) {
	 	scanf("%d",&a[i]);
	 }

	 for (i = 0; i < limit; i++) {
		if(a[i] % 5 == 0){
			printf("%d ",a[i]);
			i = i + 2;
		}else{
			printf("%d ",a[i]);
		}
	}



	 	return EXIT_SUCCESS;
	 }





//
//	    for (i = 0; i <limit; i++){
//			flag = 0;
//			for (j = 1; j <= a[i]; j++) {
//				if (a[i] % j == 0) {
//					flag++;
//				}
//			}
//			if (flag == 2)   {
//	               printf("%d ",a[i]);
//	           }
//	           else if(flag!=2){
//	               for (k = i; k < limit; k++) {
//					a[k] = a[k + 1];
//				   }
//
//				limit = limit - 1;
//				i = i - 1;
//			   }
//	    }
//
//	   	for (i = 0; i < limit; i++) {
//			flag = 0;
//			for (j = 0; j < limit; j++){
//				if (i != j) {
//					if (a[i] == a[j]){
//						flag++;
//					}
//				}
//			}
//
//			if (flag == 0) {
//				printf("\n%d\t", a[i]);
//			}
//		}


//	return EXIT_SUCCESS;
//	}
