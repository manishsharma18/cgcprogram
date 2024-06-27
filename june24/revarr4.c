#include<stdio.h>
void main()
{
	int i,n,temp, a[10];
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<10/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("Reverse array : \n");
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
}

