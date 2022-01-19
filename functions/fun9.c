#include<stdio.h>

void fun(int);

void fun(int x){
	
	printf("Square of %d is %d\n",x,x*x);
}
void main() {
	
	void (*fun_ptr)(int)=NULL;
	fun_ptr=&fun;//fun name is itself address of first line (fun_ptr=&fun and fun_ptr=fun is same
       (*fun_ptr)(10);//(*fun_ptr)(10); and fun_ptr(10); are same

}
