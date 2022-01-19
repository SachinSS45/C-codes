#include<stdio.h>

/*
  1
  2 2
  3 3 3
  */

void main() {

	int num =1;
	for(int i=1;i<=3;i++) {
	
		for(int j=1;j<=i;j++) {
			
			printf("%d ",num);
		}
		num++;
		printf("\n");
	}
}
