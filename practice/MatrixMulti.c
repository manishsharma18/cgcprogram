// Matrix Multiplication
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int flag,num,a[10][10],b[10][10],c[20][20],r1,r2,c1,c2,n,n1,n2,i,j,k;
    
    printf("Enter no. of row in array1:\n");
    scanf("%d",&r1);
    
    printf("Enter no. of column in array1:\n");
    scanf("%d",&c1);
    
    printf("Enter %d elements of array1 : \n",r1*c1);
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter no. of row in array2:\n");
    scanf("%d",&r2);
    
    printf("Enter no. of column in array2:\n");
    scanf("%d",&c2);
    
    printf("Enter %d elements of array2 : \n",r2*c2);
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    
    if(c1!=r2)
    {
        printf("Multiplication not possible\n");
        exit(0);
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                
            }
        }
    }
   
   printf("Multiplication:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
