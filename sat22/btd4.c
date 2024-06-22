#include<stdio.h>
#include<math.h>
void main()
{
	int b,d=0,i=0,rem;
	printf("Enter a Binary Number : ");
	scanf("%d",&b);
	while(b!=0)
	{
		rem=b%10;
		b/=10;
		d+=rem*pow(2,i);
		i++;
	}
	printf("Binary to Decimal : %d\n",d);
}

