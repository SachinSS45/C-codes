#include<stdio.h>

void main() {
	
	int x =10;
	int y= 20;
	
	int *iptr1 = &x;
	int *iptr2 = &y;

//	int *iptr3;
//	iptr3 = iptr1 + iptr2;//he chalat nahi karan iptr3
	
	int a;
	a = iptr1 - iptr2;
	printf("%d\n",a);
}
