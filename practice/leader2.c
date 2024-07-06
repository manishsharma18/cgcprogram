
#include <stdio.h>

int main()
{
    int i,max,n,a[10];
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[n-1];
    printf("Leaders: %d\t",max);
    for(i=n-2;i>=0;i--){
        if(max<a[i]){
            max=a[i];
            printf("%d\t",max);
        }
    }

    return 0;
}
