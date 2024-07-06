#include<stdio.h>
#include<string.h>
typedef struct
{
	char p_id[10];
	int s_amt;
}sale;
void main()
{
	int i,n,j,v[10]={0},amt[10],max;
	sale sales[10];
	printf("Enter number of product : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Product_id : ");
		scanf("%s",sales[i].p_id);
		getchar();
	
		printf("Enter Sales amount : ");
		scanf("%d",&sales[i].s_amt);
	}
	    for (i = 0; i < n - 1; i++)
        {
                for (j = 0; j < n - 1 - i; j++)
                {
                        if (sales[j].s_amt < sales[j + 1].s_amt )
                        {
                                // Swap sales[j] and sales[j+1]
                                sale temp = sales[j];
                                sales[j] = sales[j + 1];
                                sales[j + 1] = temp;
                        }
                }
        }
	for(i=0;i<n;i++)
	{
		max=sales[i].s_amt;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(sales[i].p_id,sales[j].p_id)==0)
			{
				v[j]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(v[i]<1)
		{
			
			printf("pid: %s \t AMT : %d\n",sales[i].p_id,sales[i].s_amt);
		}
	}


}
	
