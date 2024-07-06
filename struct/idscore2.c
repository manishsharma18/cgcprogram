#include<stdio.h>
#include<string.h>
typedef struct
{
        char s_id[10];
        int score;
}avg;
void main()
{
        int i,n,j,v[10]={0},amt[10],sum=0,c=0;
        avg avgs[10];
        printf("Enter number of students : \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter Student_id : ");
                scanf("%s",avgs[i].s_id);
                getchar();

                printf("Enter Score : ");
                scanf("%d",&avgs[i].score);
        }
        for(i=0;i<n;i++)
        {
                sum=avgs[i].score;
		c=1;
                for(j=i+1;j<n;j++)
                {
                        if(strcmp(avgs[i].s_id,avgs[j].s_id)==0)
                        {
                                v[j]=1;
				sum+=avgs[j].score;
				c++;
                        }
                }
		avgs[i].score=sum/c;
        }
	for(i=0;i<n;i++)
	{
		if(v[i]<1)
			printf("S_id : %s\tAvg : %d\n",avgs[i].s_id,avgs[i].score);
	}
}

