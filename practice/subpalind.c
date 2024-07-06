/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    // Declare the variable
    int c,n,n1,k,i,j,f,max;
    char str[100],temp[100];
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    max=-1;
    for(k=0;k<n;k++){
    for(i=k+1;i<=n;i++){
        c=0;
        strcpy(temp,"\0");
        for(j=k;j<i;j++){
            temp[c++]=str[j];
        }
        temp[c]='\0';
        n1=strlen(temp);
        f=0;
        for(j=0;j<n1/2;j++)
        {
            
            if(temp[j]!=temp[n1-j-1])
            {
                f=1;
                break;
            }
        }
        printf("%s\t%d\t%d\n",temp,f,n1);
        if(max<n1 && f==0){
            max=n1;
            printf("%d\n",max);
        }
    }
    }
    // // Read the variable from STDIN
    // scanf("%d", &a);
    
    // // Output the variable to STDOUT
    printf("%d", max);
    
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted
    return 0;
}
