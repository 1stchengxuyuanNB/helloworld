#include<stdio.h>
int main() 
{ double a[3];
  printf("������3������");
  int i;
  for(i=0;i<3;i++)
  scanf("%lf",&a[i]);
  for(i=0;i<3;i++)
  if(a[0]>a[1])
  {  if(a[1]>a[2])
      printf("��3�����Ӵ�С����Ϊ%lf,%lf,%lf",a[0],a[1],a[2]);  
     else
        if(a[2]>a[0])
	    printf("���������Ӵ�С����Ϊ%lf,%lf,%lf",a[2],a[0],a[1]);
	    else
	    printf("���������Ӵ�С����Ϊ%lf,%lf,%lf",a[0],a[2],a[1]);
	}
	 else 
   	 if(a[2]>a[1])
	 printf("���������Ӵ�С����Ϊ%lf,%lf,%lf",a[2],a[1],a[0]);
 	 else
 	   if(a[2]>a[0])
 	   printf("���������Ӵ�С����Ϊ%lf,%lf,%lf",a[1],a[2],a[0]);
 	   else
 	   printf("���������Ӵ�С����Ϊ%lf,%lf,%lf",a[1],a[0],a[2]);
 	   return 0;
 }
  

  	
	
	

