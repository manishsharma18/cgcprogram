#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,n,flag=0;
    char str[50];
    
    printf("Enter a string: \n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    
    for(i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not Palindrome\n");
    else
        printf("Palindrome\n");
    
    return 0;
}
