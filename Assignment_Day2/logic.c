#include "header.h"

int sum_of_digits_logic(int number) //function to calculate the sum of 5 digits
{
    int sum = 0;

    if (check_num_size(number) != 5) //Calls for a function to check a valid 5 digit number.
    {
        printf("\nInvalid number of digits.\n");//If not equal to 5 then exit with an invalid message
        return 0;
    }

    else //if size is equal to 5 then calculate the sum.
    {
        for (int i = 0; i<ARR_SIZE; i++)
        {
            sum += (number % 10);
            number = number/10;
        }
    }
     return sum;
}

int check_num_size(int number_check) //function to check the size of the code
{
    int count = 0;

    while(number_check != 0)//if the number(quotient) is 0, then while loop ends.
    {
        number_check /= 10;
        count++;
    }
    return count; //Returns the number of bits to the called function
}


int rev_of_number_logic(int number) //logic to reverse the entered number
{
    int number_size = check_num_size(number); //first we'll check the size of the number

    int LSB = 0, sum = 0;

    for (int i = 0; i<number_size; i++)
    {
        LSB = number%10;
        number /= 10;
        sum += LSB * (pow(10, ((number_size - 1) - i))); //Ex: 1234,LSB = 4; sum = (10^3)*4 || LSB = 3; sum = (10^2)*3 || LSB = 2; sum = (10^1)*2 || LSB = 1; sum = (10^0)*1 = Sum = 4000+300+20+1 = 4321
    }
    return sum;
}

int check_num_palindrome_logic(int number) //logic to check if the number is palindrome
{
    //int num_size = check_num_size(number);
    int rev_number = rev_of_number_logic(number);

    if (rev_number == number) //if rev of the number is same as the given number, then it is a palindrome
        return number;
    else
        return 0;

    return 0;//default return condition
}


int check_prime(int number)
{
    int flag = 0;

    if ((number != 0) && (number != 1)) //checking for number only if it is not equal to 0 and 1;
    {
        for (int i = 2; i <= (number / 2); i++)
        {
            if (number % i == 0)
            {
                flag = 1;
                return NOT_PRIME;//returns 2 if the number is not prime
            }

        }

        if (flag == 0)
            return PRIME_NUMBER;//returns 1 is prime
    }

    return INVALID_NUMBER;//returns 0 if invalid //when the number entered is (0 or 1)
}


int generate_prime_nums_logic(int limit) //logic to produce the list of prime numbers up-to the limit
{
    int input = 2, count = 0;

    while (count < limit)
    {
        if ((check_prime(input)) == PRIME_NUMBER)
        {
            count ++;
            printf("%d\t", input);
        }
        input ++; //check for the next prime number
    }
    return count;
}


int sum_of_series_logic(int limit) //logic to produce the pattern 1+11+111+1111...number of times as per user input
{
    int pattern_number = 1, sum = 0;

    for (int i=1; i<=limit; i++) //loop the number of times as per the users input (ex: n=4, 1(1st time), 11(2nd time), 111, 1111)
    {
        printf("%d ",pattern_number);
        if (i<limit) printf("+ "); //the + symbol is only required for numbers greater than 1 or less than limit (example: 1, dont need 1+ ; and say if number is 5, 11111+ at the end is not required)

        sum+=pattern_number; // keep adding the sum (0+1)(1+11=12)(12+111=123)(123+1111=1234)
        pattern_number= pattern_number*10 + 1;// (1*10 +1 = 11)(11*10 +1 = 111) ..
    }

    printf("\nThe sum is: %d",sum);
    return sum;

}

int armstrong_num_check_logic(int input) //logic to produce the sum of cubes of the individual numbers
{
    int sum = 0, num_size, digit_var;
    num_size = check_num_size(input);//check the number of bits for the outer loop iterations

    for (int i=1; i<=num_size; i++)
    {
      digit_var = input%10;// LSB is taken
      sum+=pow(digit_var, 3); // LSB digit is cubed and summed
      input = input/10;// the number is then updated excluding the LSB
    }
    return sum;
}

int amicable_nums_logic(int number1, int number2)
{
    int num1_sum_divisors = 0, num2_sum_divisors = 0;

    for (int i=1; i< number1; i++) //first number divisors sum logic
    {
        if (number1 % i == 0)
            num1_sum_divisors += i;
    }

      for (int i=1; i< number2; i++) //second number divisors sum logic
    {
        if (number2%i == 0)
            num2_sum_divisors += i;
    }

    if ((number1 == num2_sum_divisors) && (number2 == num1_sum_divisors))
    {
        printf("Both the number are amicable");
        return AMICABLE;
    }

    else
    {
        printf("Numbers are not amicable");
        return NOT_AMICABLE;
    }
    return INVALID_NUMBER;
}


int math_menu_logic(int num1, int num2 , int selection) // 1. Sum; 2. Difference; 3. Product
{
    switch(selection)
    {
    case 1: //addition
        {
            printf("The sum is: %d\n", (num1 + num2));
            break;
        }


    case 2: //difference
        {
            if (num1<num2)
            {
                printf("Number 1 is smaller.\n");
                return MATH_MENU_SUBTRACTION_INVALID;
            }

            else
                printf("Subtraction result is : %d\n",(num1 - num2));

            break;
        }

    case 3://product
        {
            printf("Multiplication result is: %d\n", (num1 * num2));
            break;
        }


    default: //invalid selection
        {
            return INVALID_NUMBER;
            break;
        }

    }
    return INVALID_NUMBER;
}


float volume_of_cube(float edge_length)
{
        return (pow(edge_length, 3));
}

float volume_of_cuboid (float length, float width, float height)
{
        return (length*width*height);
}

float volume_of_sphere(float radius)
{
        return ((4/(float)3)*PI*(pow(radius,3)));
}

float volume_of_cylinder(float radius, float height)
{
        return (PI*(pow(radius, 2))*height);
}


float  volume_of_cone(float radius, float height)
{
        return (PI*(pow(radius,2))*(height/(float)3));
}

float electricity_charges_logic(float user_ip_units)//electricity bill based on the number of items consumed
{
    float price = 0;

    if(user_ip_units >= TOP_BILL_SLAB_300) //process is easier just start applying the cost slabs
    {
        price += FIRST_BILL_SLAB_200*1; // for the first 200 units Rs. 1 is charged
        user_ip_units -= FIRST_BILL_SLAB_200; // number of units is updated after taking away the charged value

        price += (NEXT_BILL_SLAB_100*1.5);// for the first 200 units Rs. 1 is charged
        user_ip_units -= NEXT_BILL_SLAB_100;// number of units is updated after taking away the charged value

        price += (user_ip_units*2);// since the value of units is exceed the 300 units limit Rs.2 is being updated as per units
        return price;
    }

    else if((user_ip_units < TOP_BILL_SLAB_300) && (user_ip_units > 0))//when the price is below the range 300, now we need to check if it is in 200 limit or 100 limit
    {
        if (user_ip_units <= FIRST_BILL_SLAB_200)//checking for 200 and the value below and applying the price if its range
        {
            price += (user_ip_units*1);
            return price;
        }
        else if(user_ip_units > FIRST_BILL_SLAB_200)//checking for range (200 to 300)
        {

            price += FIRST_BILL_SLAB_200*1; //charging Rs.1 for units less than 200
            user_ip_units -= FIRST_BILL_SLAB_200;
            price += user_ip_units*1.5 ; //charging Rs.1.5 for units over 200 and less than 300 (next 100units)
            return price;
        }
        else if (user_ip_units == 0)// if the value is zero
            return price;
    }
    return -1;//can further add-on a functionality to throw an error if the entered value is less than zero (negative) or any non defined values
}


/* Better logic

#include <stdio.h>

float charge(float unit);    //function declaration

void main()

{

float unit;

printf("Enter unit Consumed:");

scanf("%f",&unit);

charge(unit);

}

float charge(float unit)   //function definition
{
    float charge;

    if(unit<=200)
    {
        charge= unit*1;
    }
    else
    if(unit>200&&unit<=300)
    {
        charge=(unit-200)*1.5 + 200;
    }
    else
    if(unit>300)
    {
        charge=(unit-300)*2+350;
    }

   printf("Charge in Rupees: %5.2f\n",charge);   //displaying the charge
   return 0;
}

*/
