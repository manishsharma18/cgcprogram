#include<stdio.h>
#include<string.h>
void main()
{
	int i,a, j,c1=0,c2=0,l,count=0;
	char str[50];
	printf("Enter a string : \n");
	scanf("%[^\n]s",str);
	getchar();
	l=strlen(str);
	for(i=1;i<l;i++)
	{
		c1=0;
		c2=0;
		for(a=0 ;a<i;a++)
		{
			if(str[a]!='a' && str[a]!='e' && str[a]!='i' && str[a]!='o' && str[a]!='u' && str[a]!='A' && str[a]!='E' && str[a]!='I' && str[a]!='O' && str[a]!='U'  )
				c1++;
		}
		
		for(a=i ;a<l;a++)
                {
                        if(str[a]!='a' && str[a]!='e' && str[a]!='i' && str[a]!='o' && str[a]!='u' && str[a]!='A' && str[a]!='E' && str[a]!='I' && str[a]!='O' && str[a]!='U'   )
                                c2++;
                }
		if(c1>c2)
			count++;
	}

	printf("%d\n",count);
}
