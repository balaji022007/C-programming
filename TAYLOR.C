#include<stdio.h>
#include<conio.h>
void main(){
long int n,i,j;
long float sum=0.0,div,fact=1.0;
clrscr();
printf("Enter The Range:\t");
scanf("%ld",&n);
for(i=1;i<=n;i++){
fact=1;
	for(j=1;j<=i;j++){
		fact = fact*j;
	}
	div=i/fact;
	sum=sum+div;
}
printf("\nTaylor series:\t%lf",sum);
getch();
}

