#include <stdio.h>

int main()
{
    int i,j,temp,n,a[10];
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10-1;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        if(a[i+1]!=a[i]+1)
        {
            printf("Missing no: %d",a[i]+1);
            break;
        }
    }

    return 0;
}
