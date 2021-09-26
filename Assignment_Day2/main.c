#include "header.h"

void sum_of_digits();
void rev_of_number();
void check_num_size_test();
void check_num_palindrome();
void generate_prime_nums();
void sum_of_series();
void armstrong_num_check();
void amicable_nums();
void math_menu();
void electricity_charges();


int main()
{
 /*   int selection;
    float edge_length, length, width, height, radius;
    char proceed_or_not; */

    //sum_of_digits();
    //rev_of_number();
    //check_num_size_test();
    //check_num_palindrome();
    //generate_prime_nums();
    //sum_of_series();
    //armstrong_num_check();
    //amicable_nums();
    //math_menu();
    electricity_charges();


    //performing the shapes volume in the main function as per question
   /*do
    {
        printf("\nProgram to calculate the volume of geometric shapes\n"); //Cube, Cuboid, Sphere, Cylinder and Cone
        printf("Select the option by number:\n1.Cube\n2.Cuboid\n3.Sphere\n4.Cylinder\n5.Cone\n");
        printf("\nYour input: ");
        scanf("%d", &selection);

        switch(selection)
        {
            case 1: //Cube
                {
                    printf("Enter the side of the cube: ");
                    scanf("%f", &edge_length);
                    printf("\nThe volume of the cube is: %f\n",volume_of_cube(edge_length));
                    break;
                }

            case 2: //Cuboid
                {
                    printf("Enter the length of the cuboid: ");
                    scanf("%f", &length);
                    printf("Width of the cuboid: ");
                    scanf("%f", &width);
                    printf("Height of the cuboid: ");
                    scanf("%f", &height);

                    printf("\nThe volume of the cuboid is: %f\n",volume_of_cuboid(length, width, height));
                    break;
                }

            case 3: //Sphere
                {
                    printf("Enter the radius of the sphere: ");
                    scanf("%f", &radius);
                    printf("The volume of the sphere is: %f\n",volume_of_sphere(radius));
                    break;
                }
            case 4://Cylinder
                {
                    printf("Enter the radius of the cylinder: ");
                    scanf("%f", &radius);
                    printf("Height of the cylinder: ");
                    scanf("%f",&height);
                    printf("The volume of the cylinder is: %f\n",volume_of_cylinder(radius, height));
                    break;
                }
            case 5://cone
                {
                    printf("Enter the radius of the cone: ");
                    scanf("%f", &radius);
                    printf("Height of the cone: ");
                    scanf("%f",&height);
                    printf("The volume of the cone is: %f\n",volume_of_cone(radius, height));
                    break;
                }
            default:
                {
                    printf("Invalid input!\n");
                    break;
                }
        }//end of switch statement

        printf("\n***Hit 'y' if you want to proceed.***\n");
        scanf(" %c", &proceed_or_not);

    } while(proceed_or_not == 'y');*/

    return 0;
}

void sum_of_digits()
{
    int number, return_value;

    printf("Enter the 5 digit number: ");
    scanf("%d", &number);
    return_value = sum_of_digits_logic(number);
    (return_value != 0)? printf("The sum is: %d", return_value): printf("Enter a valid 5 digit number!!\n"); // if return value is non zero then sum is printed, else if return is zero then INVALID DIGITS message is printed.

    //some test cases
    /*assert(sum_of_digits_logic(12345) == 15);
    assert(sum_of_digits_logic(123) == INVALID_DIGITS);
    assert(sum_of_digits_logic(1) == INVALID_DIGITS);
    assert(sum_of_digits_logic(125) == INVALID_DIGITS);
    assert(sum_of_digits_logic(123456) == INVALID_DIGITS);
    assert(sum_of_digits_logic(78951) == 30);*/
}

void rev_of_number(int number, int rev_number)
{
    int return_value;

    printf("Enter the number: ");
    scanf("%d", &number);

    return_value = rev_of_number_logic(number);
    printf("The reverse of the number is: %d", return_value);

    //additional test cases
    /*assert(rev_of_number_logic(12345) == 54321);
    assert(rev_of_number_logic(4325) == 5234);
    assert(rev_of_number_logic(1021) == 1201);*/
}

void check_num_size_test()
{
    assert(check_num_size(12345) == 5);
    assert(check_num_size(3) == 1);
    assert(check_num_size(123) == 3);
    assert(check_num_size(0) == 0);
}

void check_num_palindrome()
{
    printf("***Program to check for palindrome***\n");

    assert(check_num_palindrome_logic(1223221) == 1223221);
    assert(check_num_palindrome_logic(121) == 121);
    assert(check_num_palindrome_logic(56788765) == 56788765);
    assert(check_num_palindrome_logic(0) == 0);
    assert(check_num_palindrome_logic(12345) == INVALID_DIGITS); //not a palindrome number
    assert(check_num_palindrome_logic(45223) == INVALID_DIGITS);

}
void generate_prime_nums()
{
   // int limit;
    printf("**Program to generate N prime numbers**\n");

    /*printf("Enter the number upto which we need prime numbers: ");
    scanf("%d", &limit);*/

    //generating prime numbers logic test cases
    assert (generate_prime_nums_logic(25) == 25);
    //assert (generate_prime_nums_logic(5) == 5);

    //Checking for prime test cases
    /*assert (check_prime(23) == PRIME_NUMBER);
    assert (check_prime(22) == NOT_PRIME);
    assert (check_prime(2) == PRIME_NUMBER);
    assert (check_prime(67) == PRIME_NUMBER);
    assert (check_prime(1) == INVALID_NUMBER);
    assert (check_prime(0) == INVALID_NUMBER);
    assert (check_prime(83) == PRIME_NUMBER);*/
}

void sum_of_series()
{
    int lim;
    printf("Enter the limit to produce the sum and series: ");
    scanf("%d", &lim);


    //test cases
    /*assert(sum_of_series_logic(1) == 1);
    assert(sum_of_series_logic(2) == 12);
    assert(sum_of_series_logic(5) == 12345);
    assert(sum_of_series_logic(3) == 123);
    assert(sum_of_series_logic(0) == 0);
    assert(sum_of_series_logic(7) == 1234567);*/

    sum_of_series_logic(lim);
}


void armstrong_num_check()
{
    int number;
    printf("Enter the number to check for Armstrong number: ");
    scanf("%d", &number);

    printf("The Armstrong number is: %d", armstrong_num_check_logic(number));
}


void amicable_nums()
{
    int num1, num2;

    printf("Enter the numbers to check if they're amicable.\n");
    printf("Number 1: ");
    scanf("%d", &num1);

    printf("Number 2: ");
    scanf("%d", &num2);

    amicable_nums_logic(num1, num2);
}

void math_menu()
{
    int num1, num2;
    int selection;

    printf("WELCOME TO MATH CALCULTOR APPLICATION\n");
    printf("Please select the operation: \n 1.Sum / Addition \n 2.Difference / Subtraction \n 3.Product / Multiplication\n\n");
    printf("Your input: ");
    scanf("%d", &selection);

    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2nd number: ");
    scanf("%d", &num2);

    math_menu_logic(num1, num2, selection);
}

void electricity_charges()
{
    float user_ip_units;
    printf("Enter the number of units consumed to calculate the bill: ");
    scanf("%f", &user_ip_units);

    printf("The amount charged for the units consumed is: Rs.%0.3f", electricity_charges_logic(user_ip_units)); // 0.3 means the float displays the values upto 3 digits.
}
