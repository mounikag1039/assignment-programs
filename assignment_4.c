#include<stdio.h>
int main()
{
    int membership;
    long int amount;
    float final_amount,discount;
    printf(" enter amount : \n");
    scanf("%ld",&amount);
    printf(" enter (membership (1),regular (0)) \n");
    scanf(" %d",&membership);

    if(amount >= 500)
    {   
    if(membership == 1)
      {
            discount=(amount*10.0)/100;
            final_amount=amount-discount;
            printf("final amount = %.2f",final_amount);
      }
    else
      {
        final_amount=amount;
        printf(" final amount = %.2f",final_amount);
       }
    }
    else
      {
        final_amount=amount+50;
        printf(" final amount = %.2f",final_amount);
      }
}