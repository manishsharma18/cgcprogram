#include<stdio.h>
void main()
{
        int n;
        printf("Enter a Number : ");
        scanf("%d",&n);
        if(n&1)
		printf("Odd Number\n\n");
	else
		printf("Even Number\n\n");
}

