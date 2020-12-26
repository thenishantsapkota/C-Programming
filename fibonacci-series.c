#include <stdio.h>
int main()
    {
        int i,n,a=0,b=1,c;
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Fibonacci Series:\n");
        for(i=0;i<=n;i++)
            {
                printf("%d\n",a);
                c=a+b;
                a=b;
                b=c;
            }
    }