#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	 printf("char MIN: %d\n",CHAR_MIN);        
	 printf("char MAX: %d\n",CHAR_MAX);
//         printf("Uchar MIN: %d\n",CHAR_MIN);
         printf("Uchar MAX: %u\n",UCHAR_MAX);

         printf("SHORT MIN: %d\n",SHRT_MIN);
         printf("SHORT MAX: %d\n",SHRT_MAX);
 	printf("USHORT MAX: %u\n",USHRT_MAX);

         printf("INT MIN: %d\n",INT_MIN);
         printf("INT MAX: %d\n",INT_MAX);
         printf("UINT MAX: %u\n",UINT_MAX);

         printf("long MIN: %ld\n",LONG_MIN);
         printf("long MAX: %ld\n",LONG_MAX);
         printf("ulong MAX: %lu\n",ULONG_MAX);

         printf("FLOAT MIN: %e\n",FLT_MIN);
         printf("FLOAT MAX: %e\n",FLT_MAX);

         printf("DOUBLE MIN: %e\n",DBL_MIN);
         printf("DOUBLE MAX: %e\n",DBL_MAX);

	 printf("LONG DOUBLE MIN: %Le\n",LDBL_MIN);
         printf("LONG DOUBLE MAX: %Le\n",LDBL_MAX);
	

	 printf("\n\n");
	 return 0;
}

 

	

