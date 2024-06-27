#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,flag=0;
	char str[50];
	printf("Enter a String : \n");
	scanf("%[^\n]",str);
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Its not Palindrome\n");
	else
		printf("Its Palindrome\n");
}
