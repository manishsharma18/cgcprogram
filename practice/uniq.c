#include<stdio.h>
void main()
{
	int i,j,k=0,n,flag,a[10],tmp[10];
	printf("Enter no. of elements:\n");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j)
			{
				flag=0;
			}
		}
		if(flag)
			tmp[k++]=a[i];
	}
	printf("Unique:\n");
	for(i=0;i<k;i++)
		printf("%d\n",tmp[i]);
}


