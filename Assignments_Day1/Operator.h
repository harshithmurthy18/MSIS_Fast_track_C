/*Created Header files contain
1. pre-processors used in operators.c file
2. function prototype or definition only.
*/
//created header file will give us brief about what the plan of the program
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>

#define PI 3.141
#define Upper_to_Lower_Constant 32
#define LEAP_YEAR 0
#define NOT_LEAP_YEAR 1


float calc_area_of_circle(float);//Write a program to calculate the area of circle.
char UpperC_to_LowerC(char);//Write a program that converts upper case to lower.
void simple_compound_intrest_calc(int,  int, float);//Write a program to calculate simple and compound interest.
void CtF_FtC(int);//Write a program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius
int Even_or_Odd_logic(int);//Check if entered number is even or odd.
int leap_year_check_logic(int);//Check if entered year is leap year or not.
int two_power_logic(int); //WAP to find power of 2^N using left shift operator.
