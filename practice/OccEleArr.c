// Occurence OF each Elements IN Array
#include <stdio.h>
#include <limits.h>

int main()
{
    int flag,num,a[10],b[10],c[20],v[128],n,n1,n2,i,j,k,tmp;
    float sum,avg;
    printf("Enter no. of elements in array1:\n");
    scanf("%d",&n1);
    
    printf("Enter %d elements of array1 : \n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    
    i=0;
    j=0;
    k=0;
    while(i<n1)
    {
        b[i]=1;
        for(j=i+1;j<n1;j++)
        {
            if(a[i]==a[j])
            {
                b[i]++;
                a[j]=INT_MIN;
            }
        }
        i++;
    }
    
    printf("Occurence of each elements of array : \n");
    for(i=0;i<n1;i++)
    {
        if(a[i]!=INT_MIN)
            printf("%d : %d\t",a[i],b[i]);
    }
    return 0;
}
