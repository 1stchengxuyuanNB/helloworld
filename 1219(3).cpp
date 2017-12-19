#include<stdio.h>
int main()
{
    int a[20][20]={0};
    int t,j,k,l,m,n,i;
    scanf("%d",&t);l=t;
    for(j=0;j<t;j++)
    {
        m=j+1;n=j;
        for(k=0;k<l;k++)
        {
            if(k>0)
                a[j][k]=a[j][k-1]+m;
            else if(j>0) a[j][k]=a[j-1][k]+n;
            else  a[j][k]=1;
            m++;
            printf("%d ",a[j][k]);
        }
        l--;
        printf("\n");
    }
}

