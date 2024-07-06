#include<stdio.h>
void main()
{
	int i,j,k=0, n, a[10],temp[10];
	printf("Enter no. of element:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		temp[k++]=a[i];
		for(j=i;j>=0;j--)
			if(a[i]==a[j] && i!=j)
			{
				k--;;
			}
	}
	printf("After remove duplicate: \n");
for(i=0;i<k;i++)			
	printf("%d\n",temp[i]);
}
