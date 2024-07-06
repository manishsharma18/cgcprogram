#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,temp,a[10];
    
    printf("Enter no. of elements: \n");
        scanf("%d",&n);
    
    printf("Enter %d elements of array:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter no. of step to rotate:\n");
        scanf("%d",&k);
        
    for(i=0;i<k;i++){
        for(j=n-1;j>0;j--)
        {
            if(j==n-1)
                temp=a[n-1];
                
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
    
    printf("After Rotation:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");    
    return 0;
}
