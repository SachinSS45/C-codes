//program to print sum of first n intergers
#include<stdio.h>

void main() {

	int n;
	int sum =0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		
		sum = sum + i;
		
	}
	printf("Sum = %d\n",sum);
}
