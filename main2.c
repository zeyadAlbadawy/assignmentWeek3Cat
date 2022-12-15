#include <stdio.h>
void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter the Two Values for a and b: \n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("a = %d , and b = %d", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}