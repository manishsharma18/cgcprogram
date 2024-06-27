#include<stdio.h>
#include<math.h>
void main()
{
	int a, b,c,diffb,diffc;
	printf("Enter a number : \n");
	scanf("%d",&a);
	b=floor(sqrt(a));
	c=b+1;
	b=b*b;
	c=c*c;
	diffb=a-b;
	diffc=c-a;

	if(diffb<diffc)
		printf("Nearest square root : %d\n",b);
	else
		printf("Nearest square root : %d\n",c);
}




