#include<stdio.h>
#include<string.h>
void main()
{
        int i=0,j=0,c=0,n,f,s;
        char str[50];
        printf("Enter a string : \n");
        fflush(stdin);
        //scanf("%[^\n]s",str);
        fgets(str,50-1,stdin);
        n=strlen(str);
        f=1;
        while(f)
        {
		i=0;
                f=0;
		c=1;
                n=strlen(str);
                for(i=0;i<n-1;i++)
                {
			if(c==1)
				s=i;
                        if(str[i]-str[i+1]==0)
                        {
                                f=1;
				c++;
                                break;
                        }
                }
                if(f)
                        for(j=s;j<n;j++)
                                str[j]=str[j+c];
        }
        printf("After delete duplicate character : %s\n",str);

}




