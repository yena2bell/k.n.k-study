/*ch2 Programming Project 8. */

#include <stdio.h>

int main(void)
{
   float loan, interest, payment;
   float balance;

   printf("Enter amount of loan: ");
   scanf("%f",&loan);
   printf("Enter interest rate: ");
   scanf("%f", &interest);
   printf("Enter monthly payment: ");
   scanf("%f", &payment);

   balance = (loan-payment)*(1.0f+interest/100.0f/12.0f);
   printf("Balance remaining after first payment: $%.2f\n",balance);
   balance = (balance-payment)*(1+interest/100.0f/12.0f);
   printf("Balance remaining after second payment: $%.2f\n", balance);
   balance = (balance-payment)*(1+interest/100.0f/12.0f);
   printf("Balance remaining after third payment: $%.2f\n", balance);

   return 0;
}