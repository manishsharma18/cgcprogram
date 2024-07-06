#include <stdio.h>
#include <string.h>

typedef struct
{
    char s_id[6];
    float scr;
}score;

int main()
{
    score s[10];
    int i,j,n;
    float k,tmp;
    char temp[6];
    printf("Enter no. of records\n");
    scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++)
    {
        printf("Enter s_id : ");
        scanf("%[^\n]s",s[i].s_id);
        getchar();
        
        printf("Enter Score : ");
        scanf("%f",&s[i].scr);
        getchar();
    }
    
    for(i=0;i<n-1;i++)
    {
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i].s_id,s[j].s_id)==0)
            {
                s[i].scr+=s[j].scr;
                k++;
                strcpy(s[j].s_id,"\0");
            }
        }
        s[i].scr/=k;
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].scr<s[j].scr && strlen(s[i].s_id)>2)
            {
                strcpy(temp,s[i].s_id);
                strcpy(s[i].s_id,s[j].s_id);
                strcpy(s[j].s_id,temp);
                
                tmp=s[i].scr;
                s[i].scr=s[j].scr;
                s[j].scr=tmp;
            }
        }
    }

    
    printf("Only Avg Score :\n");
    for(i=0;i<n;i++)
    {
        if(strlen(s[i].s_id)>2)
        {
            printf("%s - %.2f\n",s[i].s_id,s[i].scr);
        }
    }

    return 0;
}
