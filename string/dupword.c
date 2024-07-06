#include<stdio.h>
#include<string.h>
void main()
{
        int i=0, j ,c=0, n,n1,k;
        char *token, str[50],t,dup[20][20], word[20][20];
        printf("Enter String :\n");
        scanf("%[^\n]s",str);
        getchar();
        n=strlen(str);
        token=strtok(str," ");
        while(token!=NULL)
        {
		strcpy(dup[i],token);
                strcpy(word[i++],token);
                token=strtok(NULL," ");

        }


        n=i;
        for(i=0;i<n;i++)
        {
                n1=strlen(word[i]);
                        for(j=0;j<n1;j++)
                        {
                                for(k=j+1;k<n1;k++)
                                {
                                        if(word[i][j]>word[i][k])
                                        {
                                                t=word[i][j];
                                                word[i][j]=word[i][k];
                                                word[i][k]=t;
                                        }
                                }
                        }
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(strcmp(word[i],word[j])==0 && i!=j)
                        {
                                printf("%s\n",dup[i]);
                        }
                }
        }
}

