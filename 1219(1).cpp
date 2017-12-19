/* 一个正整数  n  (10< n< 100),  表示要求满足的数位和。

输出
    若干行，每行包含一个满足要求的5位或6位整数。 
    数字按从小到大的顺序排列。 
    如果没有满足条件的，输出：-1  */
#include<stdio.h>
int Sum(int n){
    int sum=0;
	while(n!=0){
		
		int s=n%10;
		n=n/10;
		sum=sum+s;
	}
	return sum;
}
int Hui(int n){
	int sum=0;
	int y=n;
	int a=0;
	while(y!=0){
		sum=sum*10+y%10;
		y=y/10;	
	}
	if (sum==n){
		a=1;
	}
	return a;

} 
int main(){
	int n;
	int m=0;
	scanf("%d",&n);
	for(int i=10000;i<1000000;i++){
		if(Sum(i)==n&&Hui(i)==1){
			printf("%d\n",i);
			m++;
		}
	}
	if(m==0){
		printf("-1");
	}
} 
