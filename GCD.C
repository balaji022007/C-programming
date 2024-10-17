#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2,i,gcd,n;
	clrscr();
	printf("Enter Number 1:\t");
	scanf("%d",&num1);
	printf("\nEnter Number 2:\t");
	scanf("%d",&num2);
	if(num1>num2){
		n=num2;
	}else{
		n=num1;
	}
	for(i=1;i<=n;i++){
		if((num1%i==0)&& (num2%i==0)){
			gcd=i;
		}
	}
	printf("\nGreatest Common Divisor For The Given Number Is:\t%d",gcd);
	getch();
}