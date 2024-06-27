#include<stdio.h>
void main()
{
	int i,j,k,a[2][2],b[2][2],r[2][2];
	printf("Enter values of matrix 1 : \n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter values of matrix 2 : \n");
        for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                        scanf("%d",&b[i][j]);
	
	printf("Multiplication : \n");
        for(i=0;i<2;i++)
	{
                for(j=0;j<2;j++)
		{
			r[i][j]=0;
			for(k=0;k<2;k++)
                        	r[i][j]+=a[i][k]*b[k][j];
		}
	
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",r[i][j]);
		printf("\n");
	}
}




