#include<stdio.h>


void main() {

	char carr[5] = {'H','e','l','l','o'};

	char *captr = carr;
	int *iaptr = carr;

	printf("%c\n",*captr);
	printf("%c\n",*iaptr);

	captr++;
	iaptr++;
	
	printf("%c\n",*captr);
	printf("%c\n",*iaptr);
}


