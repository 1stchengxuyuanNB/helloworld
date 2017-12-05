#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
char a[255];
scanf("%s",a);
     for(int i=0;i<strlen(a);i++)
     {
        if(a[i]<='9' &&a[i]>='0')
            {
                count++;
                while( a[i]<='9' &&a[i]>='0')
                {
                    i++;
                }
            }
     }
     printf("%d\n",count);
}

