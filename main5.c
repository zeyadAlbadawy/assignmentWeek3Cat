#include <stdio.h>

int fact(int);
int main()
{
    int n;
    printf("Enter The Number \n");
    scanf("%d", &n);
    int result = fact(n);
    printf("The Fibonacci Of %d is %d", n, result);
}

int fact(int fibonacci)
{
    if (fibonacci == 0)
        return 0;
    else if (fibonacci == 1)
    {
        return 1;
    }
    else
    {
        return (fact(fibonacci - 1) + fact(fibonacci - 2));
    }
}