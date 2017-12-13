#include<stdio.h>
void Tent(int n,int t[]){
	int a[8]={0,0,0,0,0,0,0,0};
	int c=7;
	while(n!=0){
		int i=n%2;
		a[c]=i;
		c--;
		n=n/2;
	}
	for(int j=0;j<8;j++){
		t[j]=a[j];
	}
}
	
}
int main(){
	int N;
	//   第二步 
	scanf("%d",&N);
	int b[N];
	int n=N/8;
	int a[n];//十进制的数 
	int c[8];//接受 十进制数转化成的二进制 
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k=0;
	for(int i=0;i<n;i++){
		Tent(a[i],c); 
		for(int j=0;j<8;j++){
			b[j+8*k]=c[j];
			
		}
		k++;
	} //将2进制编码储存在数组 b 中 
	int w=1;
	for(int i=0;i<N;i++){
		if(b[i]==b[i+1]){
			w++;
		}
		else{
			printf("%d ",w+128*b[i-w+1]);
			w=1;
		}
	}	
}






