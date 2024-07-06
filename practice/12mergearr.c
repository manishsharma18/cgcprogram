#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0,n1,n2,n3,a[10],b[10],c[20];
    
    printf("Enter no. of elements in array 1: \n");
    scanf("%d",&n1);
    
    printf("Enter %d elements:\n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
        
    printf("Enter no. of elements in array 2: \n");
    scanf("%d",&n2);
    
    printf("Enter %d elements:\n",n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    
    i=0;
    j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else 
        {
            c[k++]=b[j++];
        }
    }
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
    
    
    printf("Merge array :\n");
    for(i=0;i<k;i++){
        printf("%d  ",c[i]);
    }
    printf("\n");    
    return 0;
}
