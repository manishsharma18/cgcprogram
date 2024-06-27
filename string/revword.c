#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j,n;
	char *token,temp[50],str[50],t[50][50];
	printf("Enter a string : \n");
	scanf("%[^\n]s",str);
	token=strtok(str," ");
	while(token!=NULL && i<50 )
	{
		strcpy(t[i],token);
		token=strtok(NULL," ");
		i++;

	}
	n=i;

	for(i=0;i<n/2;i++)
	{
		strcpy(temp,t[i]);
		strcpy(t[i],t[n-i-1]);
		strcpy(t[n-i-1],temp);
	}
	strcpy(str,"\0");
	for(i=0;i<n;i++)
	{
		strcat(str,t[i]);
		strcat(str," ");
	}
	printf("String : %s\n",str);
}

