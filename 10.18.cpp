#include<stdio.h>
void function();
int main(){
	function();
} 

void function(){
	float a,b,c,d,e,f,x,y;
	printf("����һ�����Ԫһ�η�����ĳ���\n�������������ֱַ�Ϊ��a,b,c,d,e,f��.\n");
	printf("����\nax+by=c \ndx+ey=f\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f );
	x=(c*e-b*f)/(a*e-b*d);
	printf("x=%f.\n",x);
	y=(c*d-a*f)/(b*d-a*e);
	printf("y=%f.\n",y);
}
