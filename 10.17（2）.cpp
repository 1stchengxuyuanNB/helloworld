#include<stdio.h>
void function1();
int main(){
	function1();
	
}

void function1(){
	float y;
	printf("������һ������\n");
	scanf("%f",&y);
	int z=(int)y;
	float a=y-z;
	printf("���������������Ϊ%d\n",z);
	printf("�������С������Ϊ%f\n",a);
}
