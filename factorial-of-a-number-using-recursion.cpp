#include <stdio.h>
int multiply(int n);
int main()
    {
        int n;
        printf("Enter a Positive Integer:");
        scanf("%d",&n);
        printf("Factorial of %d = %d" ,n ,multiply(n));
    }
int multiply(int n)
    {
        if (n>=1)
            return n*multiply(n-1);
        else
            return 1;
    }