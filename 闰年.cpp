#include<stdio.h>
int main()
{
	int a;
	int c;
	printf("���������\n");
	scanf("%d",&a);
	if (a%100==0)
	{
	
	c=a%400;
	  if (c==0) 
	  {
	  printf("����");
      }
	  else 
	  {
	  printf("ƽ��");
      }
	  

	}
	else
	  {
	  int d=a%4; 
	  if (d==0)
	  {
	  printf("����");
	  }
	  else 
	  {printf("ƽ��");}
      }
}
	

