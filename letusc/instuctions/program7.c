//area of triangle
#include<stdio.h>
#include<math.h>

void main() {
		
	float a,b,c;
	printf("Enter the lengths of sides of triangle:\n");
	scanf("%f%f%f",&a,&b,&c);
	float s = (a+b+c)/2;
	float area;
	area = sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("%f\n",area);
	
}
