#include<stdio.h>

void main() {

	int arr[2][3][3];

	printf("Enter the elements in 2D array\n");

	for(int p =0;p<2;p++) {

		for(int row =0;row < 3;row++) {
			
			for(int col =0;col< 3;col++) {
				
				scanf("%d",&arr[p][row][col]);
			}
		}
	}
	for(int p =0;p<2;p++) {

		for(int row =0;row < 3;row++) {
			
			for(int col =0;col< 3;col++) {
				
				printf("%d ",*(*(*(arr + p)+ row )+ col));
			}
			printf("\n");
		}
	}
}
