#include<stdio.h>
void main()
{
	int i,j,a[5],b[5],r[10];
	printf("Enter 5 elements of array1 :\n");
	for (i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter 5 elements of array2 :\n");
	for (i=0;i<5;i++)
                scanf("%d",&b[i]);
	for(i=0;i<5;i++)
		r[i]=a[i];
	for(i=5;i<10;i++)
		r[i]=b[i-5];
	printf("Merge Array :\n");
	for(i=0;i<10;i++)
		printf("%d\n",r[i]);
}



