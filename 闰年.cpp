#include<stdio.h>
int main()
{
	int a;
	int c;
	printf("请输入年份\n");
	scanf("%d",&a);
	if (a%100==0)
	{
	
	c=a%400;
	  if (c==0) 
	  {
	  printf("闰年");
      }
	  else 
	  {
	  printf("平年");
      }
	  

	}
	else
	  {
	  int d=a%4; 
	  if (d==0)
	  {
	  printf("闰年");
	  }
	  else 
	  {printf("平年");}
      }
}
	

