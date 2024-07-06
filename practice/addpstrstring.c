#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,n1,pos;
    char str[10],a[5];
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    printf("Enter a string to add :");
    scanf("%[^\n]s",a);
    getchar();
    n1=strlen(a);
    
    printf("Enter a position to add %s :",a);
    scanf("%d",&pos);
    for(j=n1-1;j>=0;j--)
    {
    for(i=n-1;i>=pos;i--)
    {
        str[i+1]=str[i];
    }
    n=n+1;
    }
    j=0;
    for(i=pos-1;i<pos+n1-1;i++)
    {
        str[i]=a[j++];
    }
    
    printf("String after add %s :\n",a);
    printf("%s\n",str);

    return 0;
}
