#include<stdio.h>
void main()
{
	int a,aa=0,b,c=0,i=0,n,sq,r=0;
	printf("Enter a number : \n");
	scanf("%d",&a);
	sq=a*a;
	while(a!=0)
	{
		aa=(aa*10)+(a%10);
		a/=10;
		c++;
	}
	n=sq;
	while(n!=0 && i<c )
	{
		r=(r*10)+(n%10);
		n/=10;
		i++;
	}
	if(r==aa)
		printf("Mathed\n");
	else 
		printf("Incorrect!!!!!\n");
}




