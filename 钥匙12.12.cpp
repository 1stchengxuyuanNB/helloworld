#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int key[n];
	for(int i=0;i<n;i++){
		key[i]=i+1;
	}
	int begin[k];
	int t[k];
	int keyid[k];
	for(int j=0;j<k;j++){
		scanf("%d%d%d",&keyid[j],&begin[j],&t[j]);
	}
	int end[k];
	for(int i=0;i<k;i++){
		end[i]=begin[i]+t[i];
	}
	for(int i=1;i<10000;i++){
		for(int j=0;j<k;j++){
			if(begin[j]==i){
				for(int m=0;m<n;m++){
					if(keyid[j]==key[m]){
						key[m]=0;
						break;
					}
				}
			}
			if(end[j]==i){
				for(int m=0;m<n;m++){
					if(key[m]==0){
						key[m]=keyid[j];
						break;
					}
				}
			}
		}
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",key[i]);
	}
}
