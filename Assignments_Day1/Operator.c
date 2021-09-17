#include "Operator.h" //Using the function prototypes/definitions from the header file (operations.h)


float calc_area_of_circle(float r) // function definition of area of a circle
{
    return (PI*r*r);
}

char UpperC_to_LowerC(char input_ch) //Upper A is 65, lower a is 97 values outside this range is of other charcters
{
    if (input_ch<65 || input_ch>90)
        return 0; //generally used for successful completion
    else
        input_ch += Upper_to_Lower_Constant; //converts upper to lower case letter
    return input_ch;
}

void simple_compound_intrest_calc(int P, int T, float R)
{
    float SI, CI, CI_inter;

    SI = (P*T*R)/(100);//calculation of SI
    printf("S.I is : %0.3f\n", SI); // Displaying the calculated S.I


    CI_inter = (1 + ((float)R/(float)100));//calculation of SI (intermediate value to reduce complexion in the expression)
    CI = (P * (pow(CI_inter,T))) - P;//calculation of CI
    printf("C.I is : %0.3f", CI);// Displaying the calculated C.I
}

void CtF_FtC(int input)
{
    float Cel, Far;
    //printf("The value of input is: %d", input);

    if (input == 1) //if input 1 convert C2F
    {
        printf("Enter the value of Celsius: ");
        scanf("%f", &Cel);
        Far = (Cel* 1.8) + 32;// conversion logic
        printf("Converted value in Fahrenheit is: %f\n", Far);
    }
    else if (input == 2) //if the input is 2 convert F2C
    {
        printf("Enter the value of Fahrenheit: ");
        scanf("%f", &Far);
        Cel = ( Far - 32 )/(float)1.8;// conversion logic
        printf("Converted value in Celsius is: %f\n", Cel);
    }
    else//if the user enters anything other than 1 or 2
        printf("Invalid Input\n");
}

int Even_or_Odd_logic(int number)//return 1 if the number is even and 2 if it is odd 0 if its an invalid entry
{
    if ((number % 2) == 0)//then its an even number
        return 1;
    else if ((number % 2) != 0)//else if odd
        return 2;
    return 0;
}

int leap_year_check_logic(int year) //returns 0 if its leap year, otherwise returns 1
{
        if (year%4 == 0)//should be perfectly divisible by 4 and not a century number additionally it should be perfectly divisible by 400. ((num%4 == 0)&&(num%100 !== 0)||(num%400 == 0))
        {
            if (year%100 == 0)
            {
                if (year%400 == 0)
                    return LEAP_YEAR;//printf("Its a leap year!");
                else
                    return NOT_LEAP_YEAR;//printf("Its not a leap year!");
            }
            return LEAP_YEAR;
        }
        else
            return NOT_LEAP_YEAR;
}

int two_power_logic(int power)
{
    return 1 << power; //left shifting the number bitwise will change the power of the number in terms of 2 powers.

}
