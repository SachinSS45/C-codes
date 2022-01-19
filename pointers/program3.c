#include<stdio.h>

void main() {
	
	int x=10;
	float f=30.5;
	char ch = 'A';

	int *iptr =&x;
	float *fptr =&f;
	char *cptr =&ch;

	printf("%d\n",x);
	printf("%p\n",&x);
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
	printf("=================\n");
	printf("%f\n",f);
	printf("%p\n",&f);
	printf("%p\n",fptr);
	printf("%f\n",*fptr);
	printf("=================\n");
	printf("%c\n",ch);
	printf("%p\n",&ch);
	printf("%p\n",cptr);
	printf("%c\n",*cptr);
}
