#include<stdio.h>

void main(){

	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);

	int ans=(num/2);

	if((ans*2)==num) {

		printf("Even\n");
	}else{
		printf("odd\n");
	}
}
