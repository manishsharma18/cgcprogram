#include<stdio.h>
#include<string.h>
#define MAX 50
void main()
{
	char str[MAX];
	char *token;
	printf("Enter pipe seperated words \n");
	scanf("%[^\n]s",str);
	token = strtok(str,"|");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL, "|");
	}
}

