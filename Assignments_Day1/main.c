#include "Operator.h" //this one header file includes all user defined and system header files

//function prototyping area
void area_of_circle();
void upper_to_lower_char();
void si_ci_calc();
void Cel_Far_and_Far_Cel();
void Even_or_Odd();
void leap_year_check();
void two_power();


//main function
int main()
{
    //all function calls in one place
    area_of_circle();
    upper_to_lower_char();
    si_ci_calc();
    Cel_Far_and_Far_Cel();
    Even_or_Odd();
    leap_year_check();
    two_power();

    return 0;
}


//all the function definitions start here
void area_of_circle()
{
    //program to calculate the square of the circle
    float r;

    printf("\n***Program to calculate the area of a circle!***\n");
    printf("Enter the radius: ");//Taking input form the user
    scanf("%f",&r);

    printf("The area of the circle is: %f\n", calc_area_of_circle(r)); //calling the calculate function and printing the return value from the function
}

void upper_to_lower_char()
{
        //this function converts upper case letters into a lower case letters..
        char input_ch, return_value_char;

        printf("\n***Program to covert upper case letters into a lower case letter***\n");
        printf("Enter the Upper Case Letter: ");
        scanf("%c", &input_ch);

        return_value_char = UpperC_to_LowerC(input_ch); //assigning the return value to a variable

        if (return_value_char)//if return value is 1, then valid character is entered
            printf("\nThe Lower case letter of %c is : %c\n", input_ch,return_value_char);
        else
            printf("Invalid character entered\n");//if the character entered is not an alphabet or lower case alphabet then, invalid
}

void si_ci_calc()
{
    int  principle, time;
    float rate;

    printf("\n***Program to calculate simple and compound interest***\n");
    printf("Enter the principal amount: ");
    scanf("%d",&principle);
    printf("Enter the duration : ");
    scanf("%d",&time);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);

    simple_compound_intrest_calc(principle, time, rate); //passing P,T,R values to calculate and print SI and CI

}

void Cel_Far_and_Far_Cel()
{
    int input_sel; //option from the user to select Celsius to Fahrenheit or Fahrenheit Celsius.
    printf("\n\n***Program to convert Celsius to Fahrenheit or Fahrenheit Celsius***\n");
    printf ("Enter 1 if you want to convert Celsius to Fahrenheit or 2 for Fahrenheit to Celsius\n");
    scanf("%d", &input_sel);

    CtF_FtC(input_sel);//call the logic for mathematical equation
}

void Even_or_Odd(int number) // i'll return 1 if the number is even and 2 if it is odd 0 if its an invalid entry
{
    printf("\n***Program to check if the number is even or odd***\n");
    //test cases using assert. returns process 0 (0x0) if everything is right, else assertion failed..
    assert(Even_or_Odd_logic(10) == 1);
    assert(Even_or_Odd_logic(21) == 2);
    assert(Even_or_Odd_logic(110202) == 1);
    assert(Even_or_Odd_logic(85421) == 2);
    assert(Even_or_Odd_logic(78252) == 1);

}

void leap_year_check()//returns 0 if its leap year, otherwise returns 1
{
    printf("\n***Program to check for leap year***\n");
    //test cases using assert. returns process 0 (0x0) if everything is right, else assertion failed..
    assert(leap_year_check_logic(2020) ==  LEAP_YEAR);
    assert(leap_year_check_logic(2016) == LEAP_YEAR);
    assert(leap_year_check_logic(2011) == NOT_LEAP_YEAR);
    assert(leap_year_check_logic(1947) == NOT_LEAP_YEAR);
    assert(leap_year_check_logic(1997) == NOT_LEAP_YEAR);

}

void two_power()//returns the value of the answer itself.
{
    printf("\n***Program to check for 2 power value***\n");
    //test cases using assert. returns process 0 (0x0) if everything is right, else assertion failed..
    assert(two_power_logic(0) == 1);
    assert(two_power_logic(1) == 2);
    assert(two_power_logic(2) == 4);
    assert(two_power_logic(3) == 8);
    assert(two_power_logic(4) == 16);

}
