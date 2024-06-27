#include<stdio.h>
void main()
{
	int i,j,a[2][2],temp;
	printf("Enter elements of matrix: \n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
		for(j=i+1;j<2;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	printf("Transpose Mtarix: \n");
	for(i=0;i<2;i++)
	{
                for(j=0;j<2;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}


