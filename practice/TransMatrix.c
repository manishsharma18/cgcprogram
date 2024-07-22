// Transpose Multiplication
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int flag,num,a[10][10],b[10][10],c[20][20],r1,r2,c1,c2,n,n1,n2,i,j,k,temp;
    
    printf("Enter no. of row in array1:\n");
    scanf("%d",&r1);
    
    printf("Enter no. of column in array1:\n");
    scanf("%d",&c1);
    
    printf("Enter %d elements of array1 : \n",r1*c1);
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    
      for(i=0;i<c1;i++)
        {
            for(j=0;j<r1;j++)
            {
                b[i][j]=a[j][i];
                
                
            }
        }

   
   printf("Transpose :\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
