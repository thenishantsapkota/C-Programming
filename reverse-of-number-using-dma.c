#include <stdio.h>
#include <stdlib.h>
int main()
    {
        int *p , n,  i;
        printf("Enter the Number of array elements:\n");
        scanf("%d",&n);
        p = (int*)malloc(n*sizeof(int));
        printf("\nEnter %d Numbers:\n\n",n);
        for(i=0;i<n;i++)
            {
                scanf("%d",p+i);
            }
        for (i=n-1; i>=0;i--)
            {
                printf("%d\n",*(p+i));
            }
    }