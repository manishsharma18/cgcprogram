#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,r;
	char str[5][10],t[10];
	printf("Enter 5 strings : \n");
	for(i=0;i<5;i++)
		fgets(str[i],10,stdin);
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			r=strcmp(str[j],str[j+1]);
			if(r>0)
			{
				strcpy(t,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],t);
			}
		}
	}
	for(i=0;i<5;i++)
		printf("Lexical order : %s\n",str[i]);
}


