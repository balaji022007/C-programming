#include<stdio.h>
#include<conio.h>
void main(){
	int i,range,a=0,b=1,fib;
	clrscr();
	printf("Enter The Range:\t");
	scanf("%d",&range);
	printf("\nThe Fibonacci Series is:\n");
	printf("%d\t%d",a,b);
	for(i=1;i<=range;i++){
		fib=a+b;
		a=b;
		b=fib;
		printf("\t%d",fib);
	}
	getch();
}
