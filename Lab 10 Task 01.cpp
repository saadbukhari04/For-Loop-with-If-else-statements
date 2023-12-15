#include <stdio.h>
int main(){
	int i,sum,dig1=0,dig2=0,d1,d2,sum1;
	for(i=1;i<=100;i++){
		if(i>0 && i<10){
			printf("[%d]",i);
		}
		else if(i>10 && i<=100){
				dig1 = i/10;
				dig2 = i%10;
				sum = dig1+dig2;
				if(sum>9){
					
					d1=sum/10;
					d2=sum%10;
					sum1 = d1+d2;
					printf("[%d %d %d]",i,sum,sum1);
			}
		}
	}
	return 0;
}
