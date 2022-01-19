#include<stdio.h>

void main() {
	
	int x=10;
	int y;
	int *iptr;

	y =&x;//warning yete karan pointer kade address store karayla 8 byte aste pn itha integer kade fakta 4 byte aste manun complete address store karat nahi manun jar derefrence kelatr error yete *y la 
	iptr=&x;

	printf("%d %p\n",y,iptr);
	printf("%d %p\n",*y,*iptr);
}
