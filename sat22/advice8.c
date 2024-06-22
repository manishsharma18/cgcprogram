#include<stdio.h>
void main()
{
        int temp;
        printf("Enter Temperature : ");
        scanf("%d",&temp);
        if(temp>30)
                printf("It's hot outside, stay hydrated!\n");
        else if(temp>=20 && temp<=30)
                printf("The weather is nice and warm.\n");
        else if(temp>=10 && temp<=19)
                printf("It's a bit chilly, wear a jacket.\n");
        else
                printf("It's cold outside, stay warm!\n");

}


