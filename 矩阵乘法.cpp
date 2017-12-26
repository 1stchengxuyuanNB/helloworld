#include<stdio.h>
int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	if(n!=p){
		printf("error");
	}
	else{
		int a[m][n],b[p][q];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++){
				scanf("%d",&b[i][j]);
			}
		}
		int c[m][q];
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				int temp=0;
				for(int k=0;k<n;k++){
					temp+=a[i][k]*b[k][j];
				}
				c[i][j]=temp;
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
} 
