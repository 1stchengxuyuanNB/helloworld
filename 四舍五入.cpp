#include<stdio.h>
void function();
int main(){
	function();
	
	}
	void function(){
	float x;
	printf("������һ������Ҫ�����������\n");
	scanf("%f",&x);
	int y=x;
	float z=x-y;
	int a;
	if(z>0.5)
	a=y+1;
	else
	a=y;
	printf("%d\n",a);
	
	} 
