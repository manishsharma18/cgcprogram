#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,r,l,k,n,n1,n2=0,pos[10];
    char str[50],a[10][10];
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);

    printf("Enter no. of substring to add : ");
    scanf("%d",&l);
    getchar();

    for(i=0;i<l;i++)
    {
    printf("Enter substring %d to add : ",i+1);
    scanf("%[^\n]s",a[i]);
    getchar();

    printf("Enter a position to add %s : ",a[i]);
    scanf("%d",&pos[i]);
    getchar();
    }

    for(i=0;i<l;i++)
    {
        n1=strlen(a[i]);
        r=0;
        for(j=0;j<n1;j++)
        {
            for(k=n-1;k>=pos[i]-1;k--)
            {
                str[k+1]=str[k];
            }

            n=n+1;
        }

        for(k=pos[i]-1;k<pos[i]+n1-1;k++)
            str[k]=a[i][r++];
        
        n2+=n1;
        pos[i+1]+=n2;
    }
        str[n]='\0';
    printf("String after add multiple substring :\n");
    printf("%s\n",str);

    return 0;
}

