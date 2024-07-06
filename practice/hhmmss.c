
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,a=0,b=0,user;
    char *token,str1[50],str2[50];
    
    printf("Enter no. of users:\n");
    scanf("%d",&user);
    getchar();
    
    for(i=0;i<user;i++){
    printf("Enter Time1(HH:MM:SS) of user %d:\n",i+1);
    scanf("%[^\n]s",str1);
    getchar();
    
    token=strtok(str1,"|");
    while(token!=NULL)
    {
        a=a*10+atoi(token);
        token=strtok(NULL,"|");
    }
    
    printf("Enter Time2(HH:MM:SS) of user %d:\n",i+1);
    scanf("%[^\n]s",str2);
    getchar();
    
    token=strtok(str2,"|");
    while(token!=NULL)
    {
        b=b*10+atoi(token);
        token=strtok(NULL,"|");
    }

    if(a<b)
        printf("Early\n\n");
    else if(a>b)
        printf("Late\n\n");
    else
        printf("Same\n\n");
    
    }

    return 0;
}
