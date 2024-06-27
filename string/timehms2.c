#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i,j=0,n,t[6],t2[6];
	char *token, time[10][10];
	printf("Enter number of user : \n");
	scanf("%d",&n);
	getchar();

/*	for(i=0;i<n;i++)
	{
		printf("Enter user %d time using pipe(HH|MM|SS) : \n",i+1);
		scanf("%[^\n]s",time[i]);
		getchar();
	}
*/
	for(i=0;i<n;i++)
	{
		printf("Enter user %d time using pipe(HH|MM|SS) : \n",i+1);
                scanf("%[^\n]s",time[i]);
                getchar();

		j=0;
		token=strtok(time[i],"|");
		while(token!=NULL)
		{
			t[j++]=atoi(token);
			token=strtok(NULL,"|");
		}
		if(t[0]<t[3])
			printf("Early\n");
		else if(t[0]>t[3])
			printf("Late\n");
		else
		{
			if(t[1]<t[4])
	                        printf("Early\n");
        	        else if(t[1]>t[4])
                	        printf("Late\n");
			else
			{
				if(t[2]<t[5])
		                        printf("Early\n");
                		else if(t[2]>t[5])
                        		printf("Late\n");
				else
					printf("Same\n");
			}
		}
	}
}




