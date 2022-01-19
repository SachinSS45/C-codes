#include<stdio.h>

void main() {
	
	char carr[5]={ 'H','e','l','l','o'};

	char *cptr1 = carr;
	char *cptr2 = &carr[3];
	int a = cptr2 - cptr1;//(103-100)/1 = 3
	printf("%d\n",a);
}
