#include<stdio.h>
void main()
{
	int i,j,n,pos,last,a[10];
	printf("Enter 10 elements :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter psoition : \n");
	scanf("%d",&pos);
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<pos;i++)
	{
		last=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=last;
	}
	printf("Rotate Array :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}



