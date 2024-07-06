#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,v[128]={0},flag=0,n1,n2;
    char str1[50],str2[50];
    printf("Enter string1:\n");
    scanf("%[^\n]s",str1);
    getchar();
    n1=strlen(str1);
    printf("Enter string2:\n");
    scanf("%[^\n]s",str2);
    getchar();
    n2=strlen(str2);
    if(n1!=n2){
        printf("Not a anagram.\n");
        exit(0);
    }
    for(i=0;i<n1;i++){
        v[str1[i]]++;
    }
     for(i=0;i<n2;i++){
        v[str2[i]]++;
    }
    for(i=0;i<128;i++){
        if(v[i]&1){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not a anagram\n");
    else
        printf("Anagram\n");
    return 0;
}
