#include<stdio.h>
int main()
{
	int i,j,r,c,a[i][j],b[i][j],k,n,mul[i][j];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter 1st matrix elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
     printf("enter 2nd matrix elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
      printf("\n enter multiplication matrix:");
	for(i=1;i<r;i++)
	{
		for(j=1;j<c;j++)
		{
			mul[i][j]=0;
		}
	}
      for(k=1;k<c;k++)
	{
		mul[i][k]+=mul[i][k]+mul[k][j];
      }
      return 0;
}

