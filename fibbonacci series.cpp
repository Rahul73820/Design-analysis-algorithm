#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("fibbonacci series :\n");
	for(int i=0;i<n;i++)
	{
		f1=f2;
		f2=f3;
		printf("%d, ",f3);
		f3=f1+f2;
	}
	return 0;
}
