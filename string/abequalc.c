#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,na,nb,nc,v[128]={0},vc[128]={0};
	char a[20],b[20],c[40];
	printf("Enter String a : \n");
	scanf("%[^\n]s",a);
	getchar();
	printf("Enter String b : \n");
        scanf("%[^\n]s",b);
	getchar();
	printf("Enter String c : \n");
        scanf("%[^\n]s",c);
	getchar();
	na=strlen(a);
	nb=strlen(b);
	nc=strlen(c);

	for(i=0;i<na;i++)
		v[a[i]]++;
	for(i=0;i<nb;i++)
		v[b[i]]++;
	for(i=0;i<nc;i++)
		vc[c[i]]++;
	for(i=0;i<128;i++)
	{
		if(v[i]!=vc[i])
		{
			printf("No\n");
			exit(0);
		}
	}
	printf("Yes\n");
}




