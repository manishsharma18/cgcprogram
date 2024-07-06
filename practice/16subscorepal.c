#include <stdio.h>
#include<string.h>
int main()
{
    // Declare the variable
    int c,n,n1,k,i,j,f,max,score=0;
    char str[100],temp[100];
    scanf("%[^\n]s",str);
    getchar();
    n=strlen(str);
    max=-1;
    for(k=0;k<n-4;k++){
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
        
        if(n1==4 && f==0){
            score+=5;
        }
        else if(n1==5 && f==0){
            score+=10;
	}
    }
    }
    printf("%d", score);
    
    return 0;
}
