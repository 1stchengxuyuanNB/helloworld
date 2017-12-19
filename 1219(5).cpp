#include<stdio.h>
#include <string.h>
int steps(int n){
	int d[40];
	d[2]=1;
	d[3]=2;
	for(int i=4;i<40;i++){
		d[i]=d[i-1]+d[i-2];
	}
	printf("%d\n",d[n]);
}
int main(){
	int n;
	scanf("%d",&n);	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		steps(a[j]);
	}
	
} 
