#include<stdio.h>

/* 
 1
 4  9
 16 25 36
 */

void main() {

	int num =1;
	for(int i =1;i<=3;i++) {
	
		for(int j =1;j<=i;j++) {
 			
			printf("%d  ",num*num);
			num++;
		}
		printf("\n");

	}
}
