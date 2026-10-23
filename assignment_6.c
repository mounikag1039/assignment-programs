
#include <stdio.h>

int main() 
{
    int userID, password;

    printf("Enter user ID: ");
    scanf("%d", &userID);

    printf("Enter password: ");
    scanf("%d", &password);

    if (userID == 101)  
    {
        if (password == 4321) 
        {
            printf("Login successful");
        } 
        else
         {
            printf("Incorrect password");
        }
    } 
    else
     {
        printf("User not found");
    }

    return 0;
}
