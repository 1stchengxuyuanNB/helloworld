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
	//   �ڶ��� 
	scanf("%d",&N);
	int b[N];
	int n=N/8;
	int a[n];//ʮ���Ƶ��� 
	int c[8];//���� ʮ������ת���ɵĶ����� 
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
	} //��2���Ʊ��봢�������� b �� 
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






