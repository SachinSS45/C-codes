#include<stdio.h>

/*
 A
 A B
 A B C
 A B C D
 */

void main() {

	for( int i=1;i<=4;i++) {
	 	
		char ch='A';
		for(int j=1;j<=i;j++) {
			
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
