#include<stdio.h>
#include<string.h>
void main()
{
	char t, str1[50],str2[50];
	int i,j,l1,l2;
	printf("Enter String 1 : \n");
	scanf("%[^\n]s",str1);
	printf("Enter String 2 : \n");
        scanf("%[^\n]s",str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;i<l1;i++)
	{
		t=str1[i];
		str1[i]=str1[l1-i-2];
		str1[l1-i-2]=t;
	}
	for(i=0;i<l2;i++)
        {
                t=str2[i];
                str2[i]=str1[l2-i-2];
                str2[l2-i-2]=t;
        }
	if(strcmp(str1,str2))
		printf("Its Anagram\n");
	else
		printf("Not Anagram\n");
}

