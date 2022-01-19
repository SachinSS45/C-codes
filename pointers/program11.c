#include<stdio.h>

void main() {

	float farr[5] = { 10.5 , 20.5 ,30.5 ,40.5,50.5};

	float *fptr1 =farr;
	float *fptr2 =&farr[4];

	int ans;
	ans = fptr2 -fptr1;
	printf("%d\n",ans);
}
