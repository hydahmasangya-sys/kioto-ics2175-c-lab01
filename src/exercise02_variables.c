/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: TODO
 * Registration Number: TODO
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int goats =12;
    float weight =25.5;
    char category ='A';

    float totalweight = goats * weight;

    printf("number of goats: %d\n" ,goats);
    printf("weight of each goat :%f\n" ,weight);
    printf("category :%c\n" ,category );
    printf("total weight :%.2f\n" ,totalweight);


    /* TODO: Declare and initialise an int variable */
    /* TODO: Declare and initialise a float variable */
    /* TODO: Declare and initialise a double variable */
    /* TODO: Declare and initialise a char variable */

    /* TODO: Print each value with a label and the correct format specifier */

    return 0;
}
