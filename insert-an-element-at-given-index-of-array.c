#include <stdio.h>
int main()
    {
        int array[100] ,position , i ,n, value;
        printf("Enter the Number of Elements of an Array:\n");
        scanf("%d",&n);
        printf("Enter %d elements of array:\n",n);
        for(i=0;i<n;i++)
            scanf("%d",&array[i]);
        printf("Enter the Index for Insertion:\n");
        scanf("%d",&position);
        printf("Enter the value to be inserted:\n");
        scanf("%d",&value);

        for(i = n-1 ; i>=position-1; i--)
            array[i+1] = array[i];
        array[position-1] = value;
        printf("The Final Array is:\n");
        for(i=0;i<n;i++)
            printf("%d\n",array[i]);
        return 0;
    }