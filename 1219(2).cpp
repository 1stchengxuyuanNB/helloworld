#include<stdio.h>	 
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[1000];
	getchar();
	for(int j=0;j<n;j++){
	gets(a);
	int x=strlen(a);
	for(int i=x-1;i>=0;i--){
		if(a[i]>='a'&&a[i]<='z'){
			printf("%c",a[i]);
		}
	
	}
	}
}
