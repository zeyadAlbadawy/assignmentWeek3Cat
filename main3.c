#include <stdio.h>
int main()
{
    int num, counter = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        counter++;
    }
    printf("The Number of digits = %d ", counter);
}
