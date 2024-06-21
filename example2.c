#include<stdio.h>
int main()
{
        int a, b,c,r;
	printf("Enter two no.:\n");
	scanf("%d%d",&a,&b);

        printf("Sum\n");
        c=a+b;
        r=printf("%d + %d = %d\n",a,b,c);
        printf("No. of character: %d\n",r);
        return 0;
}
