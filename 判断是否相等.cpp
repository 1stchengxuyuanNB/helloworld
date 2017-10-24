# include<math.h> 
# include<stdio.h>
void function();
int main()
{
	function();
	
}

void function()
{
	double a;double b;
	printf("请输入一组需要判断是否相等的数\n");
	scanf("%lf%lf",&a,&b);
	if (abs(a-b)<1e-6)
	printf("相等\n");
	else
	printf("不相等\n");
	} 

