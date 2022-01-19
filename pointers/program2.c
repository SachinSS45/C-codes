#include<stdio.h>

void main() {

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int *iptr= &num;
	*iptr = *iptr + 10;
	printf("%d\n",num);
	printf("%p\n",&num);
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
	printf("%p\n",&iptr);

}
