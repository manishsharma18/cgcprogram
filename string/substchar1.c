#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,l,l1,flag=0;
	char str[50],sub[10],a;
	printf("Enter a String : \n");
	scanf("%[^\n]s",str);
	getchar();
	printf("Enter a Substring : \n");
        scanf("%[^\n]s",sub);
	getchar();
	printf("Enter a Character : \n");
        scanf("%s",&a);
	l=strlen(str);
	l1=strlen(sub);
	for(i=0;i<l-l1;i++)
	{
		flag=0;
		for(j=0;j<l1;j++)
		{
			if(str[i+j]!=sub[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
               		 printf("Substring found at index : %d\n",i);
			 break;
		}

	}
	if(flag==1)
		printf("not found\n");
	
	for(i=0;i<l;i++)
	{
		if(str[i]==a)
		{
			printf("Character found and index : %d\n",i);
			break;
		}
	}

}

