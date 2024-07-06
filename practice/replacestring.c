#include <stdio.h>
#include <string.h>

int main()
{
    int pos,i,j,r,l,k,n,n1,n2,n3;
    char *p, str[50],a[10],b[10];
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    printf("Enter substring to remove : ");
    scanf("%[^\n]s",a);
    getchar();
    n1=strlen(a);
    
    printf("Enter substring to add : ");
    scanf("%[^\n]s",b);
    getchar();
    n2=strlen(b);
    
    n3=n2-n1;
    
    p=strstr(str,a);
    pos=p-str;
    
    if(n3>0){
    for(i=0;i<n3;i++)
    {
        for(j=n-1;j>pos+n3;j--)
        {
           str[j+1]=str[j];
        
        }
        n=n+1;
    }
    }
    
    if(n3<0){
    for(i=n3+1;i<=0;i++)
    {
        for(j=pos;j<n-1;j++)
        {
           str[j]=str[j+1];
        
        }
        n=n-1;
    }
    }
    str[n]='\0';
    
    k=0;
    for(i=pos;i<pos+n2;i++)
    {
        str[i]=b[k++];
    }
    
    printf("String after add multiple substring :\n");
    printf("%s\n",str);

    return 0;
}
