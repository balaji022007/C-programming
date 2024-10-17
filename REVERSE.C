#include<stdio.h>
#include<conio.h>
void main(){
	int i,rev=0,rem,num;
	clrscr();
	printf("Enter The Number:\t");
	scanf("%d",&num);
	while(num>=1){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("\nReverse Of The Given Number Is : \t%d",rev);
	getch();
}