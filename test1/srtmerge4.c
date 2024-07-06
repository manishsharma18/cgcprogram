#include<stdio.h>
void main()
{
	int i,j,k,x,n,a1,b1,c1,a[10],b[10],c[20];
	printf("Enter 10 sorted elements of array 1 : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter 10 sorted elements of array 2 : \n");
        for(i=0;i<10;i++)
                scanf("%d",&b[i]);
	
	i=0;
	j=0;
	k=0;
	while(i<10 && j<10)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i];
			i++;
		}
		else
		{
			c[k++]=b[j];
			j++;
		}
	}
	if(i<10)
		for(x=i;x<10;x++)
			c[k++]=a[x++];
	if(j<10)
		for(x=j;x<10;x++)
			c[k++]=b[x++];

	printf("Merge sort:\n");
	for(i=0;i<20;i++)
		printf("%d\t",c[i]);


}

		


