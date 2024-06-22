#include<stdio.h>
void main()
{
        float height, weight,bmi;
        printf("Enter Height(in m) and Weight(in kg) : ");
        scanf("%f%f",&height, &weight);
	bmi=weight/(height*height);
        printf("BMI : %f\n",bmi);
        if(bmi<18.5)
                printf("Underweight\n");
        else if(bmi>=18.5 && bmi <=24.9)
                printf("Normal weight\n");
        else if(bmi>=25 && bmi <=29.9)
                printf("Overweight\n");
        else
                printf("Obesity\n");

}

