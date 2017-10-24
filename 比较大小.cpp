# include<stdio.h>
void function();
int main()
{
	function();
	
}

void function()
{
	double a;double b;
	printf("请输入一组需要比较大小的数\n");
	scanf("%lf%lf",&a,&b);
	if (a>b)
	printf("较大的为%lf\n",a);
	if(a<b)
	printf("较大的为%lf\n",b);
	else
	printf("两个数相等\n");
	
	}
