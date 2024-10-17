#include<Stdio.h>
#include<conio.h>
void main(){
	int n,i,fact=1;
	clrscr();
	printf("Ente The Number:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("\n Factorial Of %d Is:\t%d",n,fact);
getch();
}

