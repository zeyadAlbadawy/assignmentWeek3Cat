#include <stdio.h>
#include <stdlib.h>
void login(char[20], char[20]);
int main()
{
    char userName[20], password[20];
    printf("Enter The User Name \n");
    scanf("%s", &userName);
    printf("Enter The Password \n");
    scanf("%s", &password);
    login(userName, password);
}

void login(char userName[20], char password[20])
{
    int foundUserName = strcmp(userName, "zeyad");
    int founPassword = strcmp(password, "01065832395");
    if (foundUserName == 0 && founPassword == 0)
    {
        printf("Login Successfully");
    }
    else
    {
        printf("Failed To Login.");
    }
}