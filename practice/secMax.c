
// Second largset Elements IN Array
#include <stdio.h>
#include <limits.h>

int main()
{
    int flag,num,a[10],b[10],c[20],v[128],n,n1,n2,i,j,k,tmp,max,smax;
    float sum,avg;
    printf("Enter no. of elements in array1:\n");
    scanf("%d",&n1);
    
    printf("Enter %d elements of array1 : \n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    
    i=1;
    j=0;
    k=0;
    max=a[0];
    smax=INT_MIN;
    while(i<n1)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && a[i]<max)
            smax=a[i];
        
        i++;
    }
    if(smax!=INT_MIN)
        printf("Second max element of array : %d\n",smax);
    else
        printf("No Second max element\n");
    return 0;
}
