#include<stdio.h>
void main()
{
	int i,j,l,sl,a[10];
	printf("Enter 10 element : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	l=0;
	sl=-1;
	for(i=1;i<10;i++)
		if(a[l]<a[i])
			l=i;
	for(i=0;i<10;i++)
	{
		if(i!=l)
		{
			if(sl==-1)
				sl=i;
			else if(a[sl]<a[i])
				sl=i;
		}
	}
	if(a[sl]!=a[l])
		printf("Second Largset : %d\n",a[sl]);
	else
		printf("Second Largest is not found\n");


}
					


		
