#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0,rem;
	clrscr();
	printf("Enter The Number:\t");
	scanf("%d",&n);
	while(n>=1){
		rem=n%10;
		sum=rem+sum;
		n=n/10;
	}
	printf("\n Sum Of The Digit Is:\t%d",sum);
	getch();
}
