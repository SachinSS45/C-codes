//write a program to op whether a num is divisible by both 2 and 3 or divisible by only one of them
#include<stdio.h>

void main() {
	
	int num;
	scanf("%d",&num);

	if(num % 2==0 && num % 3==0){
			
		printf("Divisible by both\n");

	}
	else if(num % 2==0){
			
		printf("Divisible by 2 only\n");
	}
	else if(num % 3==0){
			
		printf("Divisible by 3 only\n");
	}
	else {
		printf("Divisible by none\n");
	}

}
