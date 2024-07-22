// Remove duplicate character
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,n,n1,n2,num,k=0,v1[128]={0},v2[128]={0},a,s=0,b,flag=0,r1,r2;
    char *token,str[20],str1[20],str2[20],tmp[10][10],temp[10];
    
    printf("Enter a string :\n");
    scanf("%[^\n]s",str1);
    getchar();
    n1=strlen(str1);
   
    
    token=strtok(str1," ");
    while(token!=NULL)
    {
        strcpy(tmp[i++],token);
        token=strtok(NULL," ");
    }
    strcpy(str1,"\0");
        
    n=i;
    for(i=0;i<n/2;i++)
    {
        strcpy(temp,tmp[i]);
        strcpy(tmp[i],tmp[n-i-1]);
        strcpy(tmp[n-i-1],temp);
    }
    printf("%s\n",str1);
    strcpy(str1,tmp[0]);
    printf("%s\n",str1);
    for(i=1;i<n;i++)
    {
        strcat(str1,tmp[i]);
        strcat(str1," ");
    }
    
    
    printf("%s\n",str1);
    
    return 0;
}
