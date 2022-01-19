#include<stdio.h>

void main() {

	for(int row=1;row<=10;row++){
		
		for(int space=9;space>=row;space--){

			printf("  ");
		}
		for(int col=1;col<=row;col++){

			printf("* ");
		}
		printf("\n");
	}
	for(int row=1;row<=10;row++){
		
		
		for(int col=9;col>=row;col--){

			printf("* ");
		}
		printf("\n");
	}
}
