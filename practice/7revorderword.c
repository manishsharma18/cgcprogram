
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,a=0,b=0,user,k=0;
    char *token,str[50],temp[10],arr[10][10];
    
    printf("Enter a string: \n");
    scanf("%[^\n]s",str);
    getchar();
    
    token=strtok(str," ");
    while(token!=NULL)
    {
        strcpy(arr[k++],token);
        token=strtok(NULL," ");
    }
    for(i=0;i<k/2;i++){
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[k-i-1]);
        strcpy(arr[k-i-1],temp);
    }
    printf("Reverse order of words in string :\n");
    for(i=0;i<k;i++)
        printf("%s ",arr[i]);
    printf("\n");
    return 0;
}
