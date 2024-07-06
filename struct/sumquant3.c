#include<stdio.h>
#include<string.h>
typedef struct
{
        char p_id[10];
        int quant;
}product;
void main()
{
        int i,n,j,v[10]={0},sum=0,c=0;
        product sums[10];
        printf("Enter number of Product : \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter Product_id : ");
                scanf("%s",sums[i].p_id);
                getchar();

                printf("Enter Quantity : ");
                scanf("%d",&sums[i].quant);
        }
        for(i=0;i<n;i++)
        {
                sum=sums[i].quant;
              
                for(j=i+1;j<n;j++)
                {
                        if(strcmp(sums[i].p_id,sums[j].p_id)==0)
                        {
                                v[j]=1;
                                sum+=sums[j].quant;
                               
                        }
                }
                sums[i].quant=sum;
        }
        for(i=0;i<n;i++)
        {
                if(v[i]<1)
                        printf("S_id : %s\tAvg : %d\n",sums[i].p_id,sums[i].quant);
        }
}

