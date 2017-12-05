#include<stdio.h>
#include<string.h>
int main(){
	char s1[1000];
	char s2[1000];
	scanf("%s%s",&s1,&s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int t=0;
	int x=0;
	for(int i=0;i<len1-len2;i++){
		int k=i;
		if(s1[k]==s2[0]){
			for(int j=0;j<len2;j++){
				if(s1[k]==s2[j]){
					k++;
				}
				else{
					x=1;
					k++;
				}
			
			}
			if(x==0){
				t++;
			}
			x=0;
			
		}
		
	}	
	printf("%d",t);
}

