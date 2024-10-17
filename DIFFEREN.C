#include<stdio.h>
#include<conio.h>
void main(){
	int arr[20],i,n,min,max,diff;
	clrscr();
	printf("Enter The Range:\t");
	scanf("%d",&n);
	printf("\n%d Numbers: ",n);

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
		}
	}
	diff = max-min;
	printf("\nThe Diff Between Min And Max Is:\t%d",diff);
	getch();
}


