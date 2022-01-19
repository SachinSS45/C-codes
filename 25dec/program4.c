#include<stdio.h>

void main() {

	int num = 43531;
        int rem =0;
	
	while(num!=0){
       	 	rem = num % 10;
		num = num / 10;
		printf("%d",rem);
	}
	
}
