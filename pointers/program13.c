#include<stdio.h>

void main() {

	int x = 10;
	int y = 20;

	int *iptr1 = &x;
	int *iptr2 = &y;

	printf("%d %d\n ", *iptr1,*iptr2);
	iptr1 = iptr1 + 1;
	iptr2 = iptr2 + 1;

	printf("%d %d ", *iptr1,*iptr2);
}
