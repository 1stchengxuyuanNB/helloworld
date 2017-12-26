#include<stdio.h>
/*第1行是一个整数n，表示随后有n组测试数据，每组数据占一行。
第一个数字为该组数据的个数m(0<m<10 0000)，第二个数字为k，其后跟着m个数字，
数字间用空格隔开。(n m k 均是大于0的数)*/
int fink(int a[],int k){
	
}
int main(){
	int n,k,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&m,&k);
		int a[m];
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int temp;
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				//else if(a[i]==a[j]){
					
				//}
			}
		}
		if(k>m){
			printf("error");
		}
		else{
			printf("%d",a[k-1]);
		}
	} 
	 
}




