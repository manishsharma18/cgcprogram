#include<stdio.h>
void main()
{
	char ch;
	int a,b,c,r;
	do{
	printf("Enter two  numbers: \n");
	scanf("%d%d",&a,&b);
	printf("Choose any Arthmatic Operation:\n1.Addition\t2.Subtraction\t3.Multiplication\t4.Division\t5.Modulus\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1 : r=a+b;
			 break;
		case 2 : r=a-b;
                         break;
		case 3 : r=a*b;
                         break;
		case 4 : r=a/b;
                         break;
		case 5 : r=a%b;
                         break;
		default : printf("WRONG INPUT");

	}
	printf("\nResult : %d\n",r);
	printf("Do you want to continue(y/n):");
	scanf("%s",&ch);
	}while(ch=='y');
}

