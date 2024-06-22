#include<stdio.h>
void main()
{
        int score;
        printf("Enter Score : ");
        scanf("%d",&score);
        if(score>=90 && score <= 100)
		printf("Grade : A\n");
	else if(score>=80 && score <=89)
		printf("Grade : B\n");
	else if(score>=70 && score <=79)
                printf("Grade : C\n");
	else if(score>=60 && score <=69)
                printf("Grade : D\n");
	else
                printf("Grade : F\n");

}

