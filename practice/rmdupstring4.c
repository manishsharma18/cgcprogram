#include <stdio.h>
#include <string.h>

int main()
{
    int i,v[128]={0},n;
    char str[50];
    printf("Enter string:\n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    for(i=0;i<n;i++){
        v[str[i]]++;
    }
    printf("Duplicate elements:\n");
    for(i=0;i<n;i++)
    {
        if(v[str[i]]==1)
            printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
