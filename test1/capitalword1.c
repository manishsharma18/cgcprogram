#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char str[50];
	printf("Enter a String : \n");
	scanf("%[^\n]s",str);
	getchar();
	n=strlen(str);
	str[0]=str[0]-32;
	for(i=1;i<n;i++)
	{
		if(str[i]==' ')
		{
			str[i+1]=str[i+1]-32;
		}
	}
	printf("Capitalize string : %s\n",str);
}
