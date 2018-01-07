#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	int a[k];int b[k];
	for(int i=0;i<k;i++){
		b[i]=0;
	}
	
	
	int n=0; 
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		for(int j=2;j<=a[i];j++){
			if(a[i]%j==0){
				a[i]=a[i]/j;
				b[n]=j;
				j--; 
				n++;
			}
		}
		if(n==1){
			printf("%d",b[0]);
		}
		else{
		for(int i=0;i<n-1;i++){
			printf("%d*",b[i]);}
			printf("%d",b[n-1]);
		}
		n=0;
		for(int i=0;i<k;i++){
		b[i]=0;
		}
		printf("\n");
	} 
} 
