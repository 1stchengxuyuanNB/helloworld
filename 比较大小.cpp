# include<stdio.h>
void function();
int main()
{
	function();
	
}

void function()
{
	double a;double b;
	printf("������һ����Ҫ�Ƚϴ�С����\n");
	scanf("%lf%lf",&a,&b);
	if (a>b)
	printf("�ϴ��Ϊ%lf\n",a);
	if(a<b)
	printf("�ϴ��Ϊ%lf\n",b);
	else
	printf("���������\n");
	
	}
