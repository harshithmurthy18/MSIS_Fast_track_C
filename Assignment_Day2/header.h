#include <stdio.h>
#include <assert.h>
#include <math.h>

#define ARR_SIZE 5
#define INVALID_DIGITS 0
#define INVALID_NUMBER 0
#define NOT_PRIME 2
#define PRIME_NUMBER 1
#define AMICABLE 1
#define NOT_AMICABLE 2
#define MATH_MENU_SUBTRACTION_INVALID -1
#define PI 3.14159
#define FIRST_BILL_SLAB_200 200
#define NEXT_BILL_SLAB_100 100
#define TOP_BILL_SLAB_300 300

int sum_of_digits_logic(int); //1. Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; then sum = 15;
int check_num_size(int); //3. Write a program to count the occurrences of digit in a number
int rev_of_number_logic(int); //2. Write a program to reverse the number. For E.g. If int number = 12345; then the output reverse = 54321;
int check_num_palindrome_logic(int); //4. WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;
int check_prime(int); //(part of Q.5)Logic to check prime number
int generate_prime_nums_logic(int limit); //5. Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
int sum_of_series_logic(int);//6. Write a C program to display and find the sum of the series 1+11+111+....111 up to n.cFor eg. if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the user
int armstrong_num_check_logic(int); //7. A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a number and returns if it is Armstrong or not.
int amicable_nums_logic(int , int);//8. Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the proper divisors (not including itself) of one number is equal to the other number and vice – versa. For example 220 & 284 are amicable numbers. First we find the proper divisors of 220: 220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; 1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 .Now, 284: 1, 2, 4, 71, 142; 1 + 2 + 4 + 71 + 142 = 220. Write a C program to check that the input pair of numbers is amicable
int math_menu_logic(int, int, int);//9. Write a menu driven program to read two integers & find their sum, difference & product

/*10. Write a C program to calculate the volume of the following shapes: Cube, Cuboid,
Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take
the appropriate required inputs. Then print the result. The input should be taken in the
main function and calculations for every solid should be done in a separate function
by passing appropriate arguments.
Example: If the user chooses the option for cube, only one input is required i.e., the
side. The volume is then calculated and printed.
If the user chooses the option for cuboid, only three inputs are required i.e., length,
breadth and height. The volume is then calculated and printed.*/
float volume_of_cube(float);
float volume_of_cuboid (float, float,float);
float volume_of_sphere(float);
float volume_of_cylinder(float, float);
float  volume_of_cone(float, float);

/*11. An Electricity board charges the following rates for use of electricity.
For the First 200 units : Rs 1 per unit
For the next 100 units : Rs 1.5 per unit
Beyond 300 units : Rs 2 Per unit.
Write a C Program to read no of unit consumed and print out total charge amount*/

float electricity_charges_logic(float);
