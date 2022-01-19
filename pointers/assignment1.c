#include<stdio.h>

void main() {
	
	char carr[5];
	
	printf("Enter the alphabetes:\n");
	for(int i=0;i<=4;i++){

		scanf("%c",&carr[i]);
	}
	for(int i=0;i<=4;i++){

		printf("%c\n ",carr[i]);
	}
	int cardnum[5];

        for(int i=0; i < 5;i++) {

                scanf("%d",&cardnum[i]);
        }
        for(int i=0; i < 5;i++) {

                printf("%d\n",cardnum[i]);
        }
}

