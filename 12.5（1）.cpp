#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	char s2[200];
	gets(s1);
	gets(s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int x=0;
	if(len1>len2){
		for(int i=0;i<len2;i++){
			if(s1[i]!=s2[i]){
				x=s1[i]-s2[i];
				break;
			}
			
		}
		printf("%d",x);
	}
	else{
		for(int i=0;i<len1;i++){
			if(s1[i]!=s2[i]){
				x=s1[i]-s2[i];
				break;
			}
		}
		printf("%d",x);
	}
	
}

