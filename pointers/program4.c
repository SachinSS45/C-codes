#include<stdio.h>

void main() {
	
	int x =10;
	char ch1='A';
	int y =20;
	char ch2='B';

	int *iptr;
	char *cptr;

	iptr=&x;
	cptr=&ch1;

	printf("%p %p %d %c\n",iptr,cptr,*iptr,*cptr);

	iptr=&y;
	cptr=&ch2;
	
	printf("%p %p %d %c\n",iptr,cptr,*iptr,*cptr);
}
