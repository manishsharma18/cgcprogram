#include<stdio.h>
void main()
{
        int a,b,c,r;
        printf("Enter three Numbers : ");
        scanf("%d%d%d",&a,&b,&c);
	r= ((a>b) && (a>c)) ? a : ( ((b>a) && (b>c)) ? b : c );
        printf("Largest Number : %d\n",r);
}

