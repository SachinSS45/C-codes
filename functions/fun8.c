#include<stdio.h>
float square(float);
void  main() {

	float a;
	printf("Enter the value of num:\n");
	scanf("%f",&a);

	float b=square(a);
	printf("the square of %f is %f\n",a,b);
}

float square(float a){

	return a*a;
}
