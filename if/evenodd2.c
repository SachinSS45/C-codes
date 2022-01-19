#include<stdio.h>

void main() {

	int bashya;
	printf("Enter a num:\n");
	scanf("%d",&bashya);
	
	int subrya=1;
	
	for(int i=1;i<=bashya;i++) {
		if(subrya==1){
			subrya=0;
		}else{
			subrya=1;
		}
	}
	if(subrya==1) {
	      printf("Even\n");
	}else{
		printf("odd\n");
	}
}	
