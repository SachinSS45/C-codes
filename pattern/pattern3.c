#include<stdio.h>

/*
  a 
  d g
  j m p
*/

void main() {
	
	char ch ='a';
	for(int i=1;i<=3;i++) {
	
		for(int j=1;j<=i;j++) {
			
			printf("%c  ",ch);
			ch = ch + 3;
		}
		printf("\n");
	}
}
