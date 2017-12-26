#include<stdio.h>
int chou(int m){
	int x=0;
	while(m%2==0){
		m=m/2;
		}
	while(m%3==0){
		m=m/3;
	}
	while(m%5==0){
		m=m/5;
	}
	if(m==1){
		x=1;
	}
	return x;
}
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int i=1;i<m+1;i++){
			if(chou(i)==1){
				printf("%d ",i);
			}
		}
		printf("\n"); 
	}
}
