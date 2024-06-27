#include<stdio.h>
void main()
{
	int i=0,j=0,temp=0, a[10];
	printf("Enter 10 elements :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			
			}
		}
	}
	printf("sorted array : \n");
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
}





