#include <stdio.h>
int main(){
	int i,f,s;
			
	printf("One\n");
	printf("Two\n");
	printf("Three\n");
	printf("Four\n");
	printf("Five\n");
	printf("Six\n");
	printf("Seven\n");
	printf("Eight\n");
	printf("Nine\n");
	printf("Ten\n");
	printf("Eleven\n");
	printf("Twelve\n");
	printf("Thirteen\n");
	printf("Fourteen\n");
	printf("Fifteen\n");
	printf("Sixteen\n");
	printf("Seventeen\n");
	printf("Eighteen\n");
	printf("Nineteen\n");
	for(i=20;i<=100;i++){

		f=i/10;
		s=i%10;	
		if(i==20)	printf("Twenty\n");
		else if(i==30)	printf("Thirty\n");
		else if(i==40)	printf("Forty\n");
		else if(i==50)	printf("Fifty\n");
		else if(i==60)	printf("Sixty\n");
		else if(i==70)	printf("Seventy\n");
		else if(i==80)	printf("Eighty\n");
		else if(i==90)	printf("Ninty\n");
		else if(f==2)	printf("Twenty ");
		else if(f==3)	printf("Thirty ");
		else if(f==4)	printf("Forty ");
		else if(f==5)	printf("Fifty ");
		else if(f==6)	printf("Sixty ");
		else if(f==7)	printf("Seventy ");
		else if(f==8)	printf("Eighty ");
		else if(f==9)	printf("Ninty ");
		if(s==1) printf("one\n");
		else if(s==2) printf("Two\n");
		else if(s==3) printf("Three\n");
		else if(s==4) printf("Four\n");
		else if(s==5) printf("Five\n");
		else if(s==6) printf("Six\n");
		else if(s==7) printf("Seven\n");
		else if(s==8) printf("Eight\n");
		else if(s==9) printf("Nine\n");
		if(i==100) 	printf("Hundred");
	}
	return 0;
}
