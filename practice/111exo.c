#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    char temp[10],str[10][10];
    
    printf("Enter no. of words: \n");
    scanf("%d",&n);
    getchar();
    
    printf("Enter %d words:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s",str[i]);
        getchar();
    }   
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    
    printf("Lexographic :\n");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    printf("\n");    
    return 0;
}
