#include<stdio.h>
/*��1����һ������n����ʾ�����n��������ݣ�ÿ������ռһ�С�
��һ������Ϊ�������ݵĸ���m(0<m<10 0000)���ڶ�������Ϊk��������m�����֣�
���ּ��ÿո������(n m k ���Ǵ���0����)*/
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




