#include<stdio.h>

void main() {
	
	int iarr[5] = { 4 , 5 , 34 , 43 , 50};
	int *iaptr = iarr;

	for(int i=0; i<=4;i++) {
		
		printf("%d ",iarr[i]);
	}
	printf("\n");

	for(int i=0; i<=4;i++) {
		
		printf("%d ",*iaptr++);
	}
}
