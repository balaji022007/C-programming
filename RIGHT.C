#include<stdio.h>
#include<conio.h>
void main(){
	int n,i=1,j=1;
	clrscr();
	printf("Enter The Range:\t");
	scanf("%d",&n);
	while(i<=n){
		j=1;
		while(j<=i){
			printf(" *");
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}
