#include <stdio.h>
#include<string.h>
int main()
{
    // Declare the variable
    int c,n,n1,n2,i,j,f,ind;
    char *token,a[10],str[100],temp[10][10];
    
    printf("Enter a string : \n");
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    
    printf("Enter a character to remove : \n");
    scanf("%[^\n]s",a);
    getchar();
    n1=strlen(a);
    i=0;
    token=strtok(str," ");
    while(token!=NULL){
        strcpy(temp[i],token);
        if(!strcmp(temp[i],a))
        {
            ind=i;
        }
        token=strtok(NULL," ");
        i++;
    }
    n2=i;
    
    strcpy(str,"\0");
    
    for(i=0;i<n2;i++){
        if(i!=ind){
            strcat(str,temp[i]);
            strcat(str," ");
        }
    }
        str[n-n1-1]='\0';
    
    printf("%s\n", str);
    
    return 0;
}
