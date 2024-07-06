#include <stdio.h>
#include <limits.h>

int main()
{
    int i,j,k=0,flag,temp[10],n,a[10];
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            flag=1;
            a[j]=INT_MIN;
        }
        }
        if(a[i]!=INT_MIN && flag==1)
            temp[k++]=a[i];
    }
    printf("Duplicate elements:\n");
    for(i=0;i<k;i++)
        printf("%d\t",temp[i]);

    return 0;
}
