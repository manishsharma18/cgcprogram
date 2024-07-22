// substring score 4 & 5 length palindrome
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i=0,c=0,j,n,n1,n2,num,k=0,v1[128]={0},v2[128]={0},a,score=0,b,flag=0,r1,r2;
    char *token,str[20],str1[20],str2[20],tmp[50][10],temp[10];
    
    printf("Enter a string :\n");
    scanf("%[^\n]s",str1);
    getchar();
    n1=strlen(str1);
    
    a=0;
    for(i=0;i<n1;i++)
    {
        for(j=i;j<n1;j++)
        {
            c=0;
            for(k=i;k<=j;k++)
            {
                tmp[a][c++]=str1[k];
            }
            printf("%s\n",tmp[a]);
            a++;
            
        }
    }
    for(i=0;i<a;i++)
    {
        n2=strlen(tmp[i]);
        if(n2==4 || n2==5)
        {
            flag=0;
            for(j=0;j<n2/2;j++)
            {
                if(tmp[i][j]!=tmp[i][n2-j-1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0 && n2==4)
                score+=5;
            else if(flag==0 && n2==5)
                score+=10;
            
        }
    }
    
    
    printf("%d\n",score);
    
    return 0;
}
