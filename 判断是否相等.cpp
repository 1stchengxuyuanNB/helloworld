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
	printf("������һ����Ҫ�ж��Ƿ���ȵ���\n");
	scanf("%lf%lf",&a,&b);
	if (abs(a-b)<1e-6)
	printf("���\n");
	else
	printf("�����\n");
	} 

