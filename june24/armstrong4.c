#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,num,c=0,r=0;
	printf("Enter a Number : \n");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		num/=10;
		c++;
	}
	num=n;
	while(num!=0)
	{
		r=r+pow((num%10),c);
		num/=10;
	}

	if(r==n)
		printf("Armstrong Number\n");
	else
		printf("Not Amstrong\n");
}


