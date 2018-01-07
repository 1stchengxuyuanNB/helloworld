#include<stdio.h>
int main(){
	int n,m,t;
	scanf("%d%d%d",&n,&m,&t);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(t==0){            //ÓÒÒÆ 
		for(int i=0;i<m;i++){
			int temp=0;
			temp=a[n-1];
			for(int j=n-2;j>=0;j--){
			a[j+1]=a[j];
			} 
			a[0]=temp;
		} 
	} 
	if(t==1){
		for(int i=0;i<m;i++){
			int temp2=0;
			temp2=a[0];
			for(int j=1;j<n;j++){
				a[j-1]=a[j];
			}
			a[n-1]=temp2;
		}
	} 
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}	             
}
