#include<stdio.h>

int main(){
     
	int unit, rate=0, bill;

	printf("Enter unit:");
        scanf("%d", &unit);
	if (unit<=10){
		
	       	rate==10;
	}
	else if(unit>10&&unit<=20){
		rate==20;
	}

	else{
	       	rate==25;
	 }
       bill=unit*rate;
       printf("bill is ₹ %d\n",bill);
       return 0;
}
