#include <stdio.h>
#include <string.h>

typedef struct
{
    char p_id[6];
    int amt;
}sales;

int main()
{
    sales s[10];
    int i,j,n,tmp;
    char temp[6];
    printf("Enter no. of records\n");
    scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++)
    {
        printf("Enter p_id:");
        scanf("%[^\n]s",s[i].p_id);
        getchar();
        
        printf("Enter amount:");
        scanf("%d",&s[i].amt);
        getchar();
        
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].amt<s[j].amt)
            {
                strcpy(temp,s[i].p_id);
                strcpy(s[i].p_id,s[j].p_id);
                strcpy(s[j].p_id,temp);
                
                tmp=s[i].amt;
                s[i].amt=s[j].amt;
                s[j].amt=tmp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i].p_id,s[j].p_id)==0)
            {
                strcpy(s[j].p_id,"\0");
            }
        }
    }
    
    printf("Only highest amt:\n");
    for(i=0;i<n;i++)
    {
        if(strlen(s[i].p_id)>2)
        {
            printf("%s - %d\n",s[i].p_id,s[i].amt);
        }
    }

    return 0;
}
