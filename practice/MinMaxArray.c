
// MAX, MIN IN ARRAY
#include <stdio.h>
#include <math.h>

int main()
{
    int a[10],n,i,min,max;
    printf("Enter no. of elements in array:\n");
    scanf("%d",&n);
    printf("Enter elements of array : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    i=1;
    while(i<n)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
            i++;
    }
    
printf("min : %d\nmax: %d\n",min,max);
    return 0;
}
