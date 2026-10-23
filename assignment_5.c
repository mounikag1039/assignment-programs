
#include <stdio.h>

int main() {
    int age, creditScore;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age >= 21 && age <= 60)
    
    {
        if (income >= 25000)
         {
            if (creditScore >= 700)
            {
                printf("Loan approved");
            }
             else
             {
                printf("Loan rejected: credit score below 700");
             }
        }
         else 
         {
            printf("Loan rejected: income below Rs.25,000");
        }
    } 
     else{
        printf("Loan rejected: age not in 21 to 60");
    }

    return 0;
}
