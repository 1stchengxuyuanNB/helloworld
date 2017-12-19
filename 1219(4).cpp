#include<stdio.h>
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	int sum=0;
	int temp=a;
	for(int i=0;i<n;i++){
		sum=sum+a;
		a=a*10;
		a=a+temp;
	}
	printf("%d",sum);
} 
