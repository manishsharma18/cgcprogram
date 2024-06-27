#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,a,l,q[10],j,flag,l1,c=0,n;
	char *token,str[50],uniq[10][10],uniq2[10][10];
	printf("Enter a string : \n");
	scanf("%[^\n]s",str);
	getchar();
	l=strlen(str);

	token=strtok(str," ");
	while(token!=NULL)
	{
		strcpy(uniq[i++],token);
		token=strtok(NULL," ");
	}
	l1=i;
	for(i=0;i<l1;i++)
	{
		for(j=i;j<l1;j++)
		{
			if((strcmp(uniq[i],uniq[j])==0) && i!=j)
			{
				q[c++]=i;
				q[c++]=j;
			}
		}
	}
	n=c;
	a=0;
	for(i=0;i<l1;i++)
	{	
		flag=0;
		for(c=0;c<n;c++)
		{
			if(strcmp(uniq[q[c]],uniq[i])==0)
		
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			strcpy(uniq2[a++],uniq[i]);
			
	}
	n=a;
	printf("Unique words:\n");
	for(i=0;i<n;i++)
		printf("%s\t",uniq2[i]);
	printf("\n");




}


