/*
#include<stdio.h>
void main()
{
        int i,j,k=0,n,flag,a[10],tmp[10];
        printf("Enter no. of elements:\n");
        scanf("%d",&n);
        printf("Enter %d elements: \n",n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
                flag=1;
                for(j=0;j<n;j++)
                {
                        if(a[i]==a[j] && i!=j)
                        {
                                flag=0;
                        }
                }
                if(flag==0)
                        tmp[k++]=a[i];
        }
        printf("Duplicate:\n");
        for(i=0;i<k;i++)
                printf("%d\n",tmp[i]);
}
*/

#include <stdio.h>

void printDuplicates(int arr[], int n) {
    // Traverse the array
    for (int i = 0; i < n; i++) {
        // Check if this element is processed or not
        if (arr[i] != -1) {
            int count = 1;
            // Compare it with all subsequent elements
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    // Mark the element as processed
                    arr[j] = -1;
                }
            }
            // If count is greater than 1, print the element (it's a duplicate)
            if (count > 1) {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements in array: ");
    printDuplicates(arr, n);
    printf("\n");

    return 0;
}
          
