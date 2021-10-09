#include <stdio.h>
#include <math.h>
#include <assert.h>

#define ARRAY_SIZE 10
#define PATTERN_SIZE 4
#define CONCAT(a,b) a##b
#define MAC_SQR(a , b) pow(a, b)

int B2D_and_D2B_logic(int);//1. WAP to convert a binary number to decimal and vice versa.
void sequence_sum_of_prev_three_logic(int arry[]); //Generate a sequence of numbers such that every number in the sequence is the sum of the previous three numbers. The first three numbers are 0,0,1.

/*Question 3. WAP to print the following sketch by taking in N as number of rows
* * * *
* * *
* *
*
End*/
void pattern_generation_logic();
void two_digit_seven_multiple_logic();//4. Write a C program, which will print two digit numbers whose sum of both digit is multiple of seven. e.g. 16,25,34......

int power_of_number_reccurtion_logic(int, int);//5. Write a recursive function for calculating power of a number. Take base number and exponent from user.
int factorial_logic(int); //6.Write a recursive function for calculating factorial of a number.

 //Implemented in MACRO //8. Concatenate two integer values using macros
 //Implemented in MACRO //9. Find square of a number using macros.
void math_menu_using_header_logic();//Write a menu driven program to display the mathematical functions like square root, natural log, log10x, power(x,n), Cos(x). (use math.h)

double recursive_sequence_logic(int, int, int);//10. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
