#include<stdio.h>
void main()
{
	int i,j,k,n,a[10],b[10];
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
			
				}
				n--;
			}
			
		}
	}
	printf("After removing duplicates : \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
