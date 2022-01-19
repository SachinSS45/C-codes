#include<stdio.h>

void main() {

	int num = 43531;
        int rem =0;
	int sum = 0;
	while(num!=0){
       	 	rem = num % 10;
		num = num / 10;
		sum = sum + rem;
	}
	printf("%d\n",sum);
}
