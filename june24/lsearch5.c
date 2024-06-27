#include<stdio.h>
void main()
{
	int i,n,a[10],flag=0,idx;
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter a element to search : \n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			flag=1;
			idx=i;
		}
	}
	if(flag==1)
		printf("Element Found at Index : %d\n",idx);
	else
		printf("Element Not Found\n");
}

