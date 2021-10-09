#include "header.h"

void B2D_and_D2B();
void sequence_sum_of_prev_three();
void pattern_generation();
void two_digit_seven_multiple();
void power_of_number_reccurtion();
void factorial();
void macro_int_con_cat();
void macro_square();
void math_menu_using_header();
void recursive_sequence();

int main()
{
    //B2D_and_D2B();
    //sequence_sum_of_prev_three();
    //pattern_generation();
    //two_digit_seven_multiple();
    //power_of_number_reccurtion();
    //factorial();
    //macro_int_con_cat();
    //macro_square();
    //math_menu_using_header();
    recursive_sequence();


    return 0;
}


void B2D_and_D2B()
{
    int selection;

    printf("Welcome to binary to decimal and decimal to binary converter calculator\n\n");
    printf("Hit 1 for binary to decimal conversion, hit 2 for decimal to binary conversion\n");
    printf("Your selection: ");
    scanf("%d", &selection);

    B2D_and_D2B_logic(selection);

}

void sequence_sum_of_prev_three() //example 0, 0, 1, 1, 2, 4, 7, 13 ..
{
    int arry[ARRAY_SIZE] = {0, 0, 1}; //tried arry [] = {0,0,1} on top of the function in initialization section but faced Process returned -1073741819 (0xC0000005) issue, followed:https://stackoverflow.com/questions/34648717/codeblocks-crashes-process-returned-0xc0000005 link, but still stuck

    sequence_sum_of_prev_three_logic(arry); //passing an array to a function is just by its name
}

void pattern_generation()
{
    pattern_generation_logic();
}

void two_digit_seven_multiple()
{
    two_digit_seven_multiple_logic();
}

void power_of_number_reccurtion()
{
    int base_num, expo;

    printf("Enter the base number: ");
    scanf("%d", &base_num);

    printf("Enter the exponent: ");
    scanf("%d", &expo);

    printf("The answer after power calculation is: %d", power_of_number_reccurtion_logic(base_num, expo));
}

void factorial()
{
    int number = 0;

    printf("Enter the number to calculate the factorial: ");
    scanf("%d", &number);
    printf("The factorial of the number is: %d", factorial_logic(number));
}

void macro_int_con_cat()
{
    assert (CONCAT(15, 23) == 1523);
    assert (CONCAT(34, 56) == 3456);
}

void macro_square()
{
    assert (MAC_SQR(5, 2) == 25);
    assert (MAC_SQR(7, 2) == 49);
    assert (MAC_SQR(11, 2) == 121);
}

void math_menu_using_header()//square root, natural log, log10x, power(x,n), Cos(x)
{
    printf("Welcome to math calculator!\n");

    math_menu_using_header_logic();
}

void recursive_sequence()
{
        float x = 0;
        int odd_num = 1, terms = 0;
        double answer = 0;

        printf("Enter the number x: ");
        scanf("%f", &x);

        printf("Enter the number of terms: ");
        scanf("%d", &terms);

        answer = recursive_sequence_logic(x, odd_num, terms);
        printf("The answer of the sequence is: %lf\n", answer);

}
