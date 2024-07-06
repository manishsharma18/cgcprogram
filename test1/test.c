
#include<stdio.h>
#include<string.h>
void main()
{
        int i,j,n,f;
        char str[50];
        printf("Enter a string : \n");
        fflush(stdin);
       	//scanf("%[^\n]s",str);
        fgets(str,50-1,stdin);
        n=strlen(str);
	f=1;
	while(f)
	{
		f=0;
		n=strlen(str);
		for(i=0;i<n-1;i++)
		{
			if(str[i]-str[i+1]==-1)
			{
				f=1;
				break;
			}
		}
		if(f)
			for(j=i;j<n;j++)
				str[j]=str[j+2];
	}
        printf("After delete duplicate character : \n");
        printf("%s\n",str);
}




