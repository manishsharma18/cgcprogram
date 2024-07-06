#include <stdio.h>
#include <string.h>

typedef struct
{
    char p_id[6];
    int qnt;
}sum;

int main()
{
    sum s[10];
    int i,j,n,tmp;
    char temp[6];
    printf("Enter no. of records\n");
    scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++)
    {
        printf("Enter p_id : ");
        scanf("%[^\n]s",s[i].p_id);
        getchar();
        
        printf("Enter Quantity : ");
        scanf("%d",&s[i].qnt);
        getchar();
        
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i].p_id,s[j].p_id)==0)
            {
                s[i].qnt+=s[j].qnt;
                strcpy(s[j].p_id,"\0");
            }
        }
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].qnt<s[j].qnt && strlen(s[i].p_id)>2)
            {
                strcpy(temp,s[i].p_id);
                strcpy(s[i].p_id,s[j].p_id);
                strcpy(s[j].p_id,temp);
                
                tmp=s[i].qnt;
                s[i].qnt=s[j].qnt;
                s[j].qnt=tmp;
            }
        }
    }

    
    printf("Sum of quantity :\n");
    for(i=0;i<n;i++)
    {
        if(strlen(s[i].p_id)>2)
        {
            printf("%s - %d\n",s[i].p_id,s[i].qnt);
        }
    }

    return 0;
}
