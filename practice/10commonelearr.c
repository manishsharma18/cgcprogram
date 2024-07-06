#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,n1,n2,a1[10],a2[10];
    
    printf("Enter no. of elements in array1: \n");
        scanf("%d",&n1);
    
    printf("Enter %d elements of array1:\n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
        
    printf("Enter no. of elements in array2: \n");
        scanf("%d",&n2);
    
    printf("Enter %d elements of array2:\n",n2);
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    
    printf("All common elements are:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++)
        {
            if(a1[i]==a2[j]){
                printf("%d\t",a1[i]);
                break;
            }
        }
    }
    printf("\n");    
    return 0;
}
