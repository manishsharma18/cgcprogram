#include<stdio.h>
#include<string.h>
int ispal(char *str,int a,int b)
{
	while(a<b)
	{
		if(str[a]!=str[b])
			return 0;
		a++;
		b--;
	}
	return 1;
}
		
			
void main()
{
	int i=0,j,l,flag=0, n,n1,score=0;
	char str[50];
	printf("Enter a String : \n");
	scanf("%[^\n]s",str);
	l=strlen(str);
	for(i=0;i<=l-4;i++)
	{
		if(ispal(str,i,i+3))
			score+=5;
		if(i<=l-5 && ispal(str,i,i+4))
			score+=10;
	}
	printf("Score : %d\n",score);
}



