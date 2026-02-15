
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Yahyaa Umarji
 * ID: 201957821
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 30000.0;
   float NI_Rate = 0.09;
   float tax_rate = 0.25;
   float NI_contribution;
   float tax_contribution;
   float take_home;
   float salary_after_NI;
   float taxableAmount;
    // calculate the deductions and final take-home salary
   NI_contribution = salary * NI_Rate;
   salary_after_NI = salary - NI_contribution;

   taxableAmount = salary_after_NI - 12500;
   if (taxableAmount < 0) taxableAmount = 0;

   tax_contribution = taxableAmount * tax_rate;
   take_home = salary_after_NI - tax_contribution;


    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NI_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
 }