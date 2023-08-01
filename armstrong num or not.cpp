#include<stdio.h>
int main()
{
	int n,rem,t,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	while(n!=0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==t)
	{
		printf("/n it is an armstrong n:");
		
	}
	else
	{
		printf("/n it is not an armstrong n:");
	}
	return 0;
	
	
}
