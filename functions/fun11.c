#include<stdio.h>

void fact(int);
void strong(int);
void armstrong(int);

void main(){

	int num;
	do{
		int choice;
		printf("1:factorial Number\n");
		printf("2:Strong Number\n");
		printf("3:Armstrong Number\n");

		printf("Enter your choice: ");
		scanf("%d",&choice);
		printf("\n");

		void(*ptr[3])(int)={fact,strong,armstrong};
		
		switch(choice){
			
			case 1:
				{
				int num1;
				printf("For which number do you want to find factorial: ");
				scanf("%d",&num1);
				printf("\n");
				ptr[0](num1);
				break;
				}
			case 2:
				{
				int num2;
				printf("check whether the given number is strong or not: ");
				scanf("%d",&num2);
				printf("\n");
				ptr[1](num2);
				break;
				}
			case 3:
				{
				int num3;
				printf("check whether the given number is Armstrong number or not: ");
				scanf("%d",&num3);
				printf("\n");
				ptr[2](num3);
				break;
				}
			default:
				printf("Invalid choice\n");
				break;
		}
		printf("Do you want to do any calculation/checking again:\n ");
		printf("1:yes\n");
		printf("0:No\n");
		scanf("%d",&num);
	}while(num==1);
	printf("Have a nice day");
}

void fact(int n){

	int fact=1;
	for(int i=1;i<=n;i++){
		
		fact = fact * i;
	}
	printf(" factorial of %d is %d \n",n,fact);
}

void strong(int n){
	
	int temp,r,fact;
	temp=n;
	int sum = 0;

	while(n>0){

		r=n%10;
		fact=1;
		for(int i=r;i>=1;i--){
			
			fact=fact*i;
		}
		sum = sum + fact;
		n = n/10;
	}
	n= temp;
	if(n==sum){
		printf("%d is strong number\n",n);
	}else{
		printf("not a strong number\n");
	}
}
void armstrong(int n){
	
	int temp,r;
	temp=n;
	int sum=0;

	while(n>0){

		r=n%10;
		sum = sum + (r*r*r);
		n = n/10;
	}
	n= temp;
	if(n==sum){
		printf("%d is Armstrong number\n",n);
	}else{
		printf("not a strong number\n");
	}
}


