#include<stdio.h>
void function1();
int main(){
	function1();
	
}

void function1(){
	float y;
	printf("请输入一个数。\n");
	scanf("%f",&y);
	int z=(int)y;
	float a=y-z;
	printf("这个数的整数部分为%d\n",z);
	printf("这个数的小数部分为%f\n",a);
}
