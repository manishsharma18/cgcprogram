#include<stdio.h>
#include<string.h>
void main()
{
	int i,s, j,n;
	char a,str[50];
	printf("Enter a STRING : \n");
	scanf("%[^\n]s",str);
	n=strlen(str);
	printf("Enter a character to remove from last : \n");
	scanf("%s",&a);
	for(i=0;i<n;i++)
	{
		if(str[i]==a)
			s=i;
	}
	for(j=s;j<n-1;j++)
		str[j]=str[j+1];
	str[n-1]='\0';
	printf("String after remove : %s\n",str);
}
