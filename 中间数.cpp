#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int d=0;
	int x=0;
	int m=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]>a[j]){
				x++;
			}
			if(a[i]<a[j]){
				d++;
			}
		}
		if(d==x){
			printf("%d",a[i]);
			m++; 
			break;
		} 
		d=0;
		x=0;
	} 
	if(m==0){
		printf("-1");
	}
}
