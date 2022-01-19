#include<stdio.h>
void gun(int ,char);
void fun(int*,char*);
void run(char**,int**);
void main() {

	int x;
	char ch1;
	printf("Enter the value of Num & character\n");
	scanf("%d %c",&x,&ch1);
	
	
	printf(" the value of Num & character\n");
	printf("%d %c\n",x,ch1);

	gun(x,ch1);
}

void gun(int a,char ch2) {
	
	printf("%d %c\n",a,ch2);
	fun(&a,&ch2);
}

void fun(int *iptr1,char *cptr1) {
	
	printf("%p\n",iptr1);
	printf("%p\n",cptr1);
	printf("%d %c\n",*iptr1,*cptr1);
	run(&cptr1,&iptr1);
}

void run(char **cptr2,int **iptr2) {
	
	printf("%p\n",cptr2);
	printf("%p\n",iptr2);
	printf("%c %d\n",**cptr2,**iptr2);
}

