#include<stdio.h>
void main()
{
	int i,j,t,n,r=0;
	printf("Enter a number : \n");
	scanf("%d",&n);
	while(n!=0)
	{
		r+=n%10;
		n/=10;
	}
	printf("Sum : %d\n",r);
}
