#include<stdio.h>

void main() {

	int x=30;
	int ans;

	ans= x++ + x++;
	printf("%d %d\n",ans,x);
}
