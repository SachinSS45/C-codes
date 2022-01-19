#include<stdio.h>

void main() {
	
	int x = 11;
	char ch = 'C';

	int *iptr;
	char *cptr;

	iptr = &x;
	cptr = &ch;

	printf("%p %p %d %c \n", iptr ,cptr,*iptr, *cptr);

	iptr = &ch;
	cptr = &x;
	printf("%p %p %d %c \n", iptr ,cptr,*iptr, *cptr);//imp 2526 kasa ala
	
}
