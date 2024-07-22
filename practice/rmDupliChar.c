// Remove duplicate character
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n,num,k=0,v[128]={0},a,s=0,b,flag,r1,r2;
    char str[20],tmp[20];
    
    printf("Enter a string :\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    for(i=0;i<n;i++)
    {
        v[str[i]]++;
    }
    
    for(i=0;i<n;i++)
    {
        if(v[str[i]]>1)
        {
            //printf("%c",str[i]);
            tmp[k++]=str[i];
            v[str[i]]=-1;
        }
        else if(v[str[i]]==1)
        {
            tmp[k++]=str[i];
            //printf("%c",str[i]);
        }
    }
    tmp[k]='\0';
    strcpy(str,tmp);
    printf("%s\n",str);
    return 0;
}
