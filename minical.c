#include<stdio.h>
void main()
{
	char ch;
	int a,b,c,r;
	do{
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	printf("Choose any Operation:\n1.ADDITION\t\t2.SUBTRACT\t\t3.MULTIPLY\t\t4.DIVISON\t5.MODULUS\n6.BITWISE AND(&)\t7.BITWISE OR(|)\t\t8.BITWISE NOT(~)\n");
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
		case 6 : r=a&b;
			 break;
		case 7 : r=a|b;
			 break;
		case 8 : printf("Result : ~a = %d , ~b = %d\n\n",~a,~b);
			 break;
		default: printf("Wrong Input\n");
	}
	if (c<8)
		printf("\nResult : %d\n\n",r);

	printf("Do you want to continue(y/n):\n");
	scanf("%s",&ch);
	}while(ch=='y');
}
