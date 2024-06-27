#include<stdio.h>
void main()
{
	int i,flag=0,j,n,a[10];
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
		printf("Its not a Palindrome\n");
	else
		printf("Its Palindrome\n");
}


