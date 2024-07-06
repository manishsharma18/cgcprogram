#include <stdio.h>
#include<string.h>
int main()
{
    // Declare the variable
    int c,n,n1,n2,i,j,f,ind;
    char *token,a,b,str[100],temp[10][10];
    
    printf("Enter a string : \n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    printf("Enter a character to replace : \n");
    scanf("%c",&a);
    getchar();
    
    printf("Enter a character to add : \n");
    scanf("%c",&b);
    
    
    for(i=0;i<n;i++){
        if(str[i]==a){
            str[i]=b;
            break;
        }
    }
    printf("%s\n", str);
    
    return 0;
}
