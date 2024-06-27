#include<stdio.h>
void main()
{
	int a[10],i,sum=0;
	float avg=0;
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		sum+=a[i];
	avg=sum/(sizeof(a)/sizeof(a[0]));
	printf("Sum : %d\nAverage : %f\n",sum,avg);
}
