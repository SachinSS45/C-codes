#include<stdio.h>

void main() {

	char ch='C';
	for(int i=1;i<=3;i++) {
 	;
		for(int j=3;j>=i;j--) {

			printf("%c ",ch);
			ch--;
		}
		ch+=2;
		

		printf("\n");
	}
}
