#include<stdio.h>
void main()
{
	int i,j,a[10],f[10],count=0;
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		f[i]=-1;
	}
	for(i=0;i<10;i++)
	{
		count=1;
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
			f[i]=count;
	}
	for(i=0;i<10;i++)
	{
		if(f[i]!=0)
		{
			printf("value : %d\t occ : %d\n",a[i],f[i]);
		}
	}

}

