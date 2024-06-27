#include<stdio.h>
#include<string.h>
void main()
{
        int i,s, j,n;
        char a,b,str[50];
        printf("Enter a STRING : \n");
        scanf("%[^\n]s",str);
        n=strlen(str);
        printf("Enter a character to replace from last : \n");
        scanf("%s",&a);
	printf("Enter a character that you want to add : \n");
	scanf("%s",&b);
        for(i=0;i<n;i++)
        {
                if(str[i]==a)
                        str[i]=b;
        }
        printf("String after replace : %s\n",str);
}

