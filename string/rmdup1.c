#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void main()
{
	int i,j,l;
	char str[50];
	bool visit[256]={false};
	printf("Enter a String : \n");
	scanf("%[^\n]s",str);
	l=strlen(str);
	if(l<=1)
		printf("String has only singlw character" );
	else
	{
		j=0;
		for(i=0;i<l;i++)
		{
			if(!visit[str[i]])
			{
				visit[str[i]]=true;
				str[j++]=str[i];
			}
		}
		str[j]='\0';
	}
	printf("After Removing Duplicate : %s\n",str);

}

