#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,n1,pos;
    char str[10],a;
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    printf("Enter a character to add :");
    scanf("%c",&a);
    
    printf("Enter a position to add %c :",a);
    scanf("%d",&pos);
    
    for(i=n-1;i>=pos;i--)
    {
        str[i+1]=str[i];
    }
    str[i]=a;
    n=n+1;
    
    
    printf("String after add %c :\n",a);
    printf("%s\n",str);

    return 0;
}
