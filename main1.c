#include <stdio.h>
int getMax(int, int);
int main()
{
    int firstNum, secondNum;
    printf("Please Enter The First Number \n");
    scanf("%d", &firstNum);
    printf("Please Enter The Second Number \n");
    scanf("%d", &secondNum);
    int result = getMax(firstNum, secondNum);
    printf("The Greater Number is %d", result);
}

int getMax(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 < num2)
    {
        return num2;
    }
}