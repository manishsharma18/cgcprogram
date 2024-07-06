#include<stdio.h>
#include<stdlib.h>
int push(int stack,int top, int data, int ms)
{
	if(top==ms-1)
		return 0;
	else
		return stack[++top]=data;
}
void main()
{
	int i,j,n,stack[10];

