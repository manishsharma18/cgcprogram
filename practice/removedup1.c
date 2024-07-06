#include <stdio.h>
#include <limits.h>

int main()
{
    int i,j,temp[10],n,a[10];
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=INT_MIN;
            }
        }
    }
    printf("After remove duplicate: ");
    for(i=0;i<n;i++){
        if(a[i]!=INT_MIN)
            printf("%d\t",a[i]);
    }

    return 0;
}
