#include "header.h"

long int size_of_digits(long int number) //logic to check the number of digits in a given number
{
    long int size = 0;

    while(number != 0)//when the quotient is zero the loop stops
    {
        number = number/10; // keep reducing the units place when we divide the number by 10
        size++;
    }
    return size; //returns the number of digits to the called function
}

int B2D_and_D2B_logic(int selection) //Binary to digital logic
{
    int size;
    long int b_input, B_val = 0, sum = 0, LSB = 0, d_input = 0;

    if (selection == 1)//Binary to decimal calculation.
    {
        printf("Enter the binary input: ");
        scanf("%ld", &b_input);

        size = size_of_digits(b_input); //checks the size of the digits

        //logic
        for (int i = 0; i<size; i++)
        {
            LSB = b_input % 10; //take lsb for calculation
            sum += (LSB*pow(2,i)); // LSB *2^(0, 1, 2, 3 ..) (....8421)
            b_input /= 10;
        }
        printf("The decimal equivalent is: %ld", sum);
    }

    else if (selection == 2)//Decimal to Binary calculation.
    {
        int count_1 = 0;
        printf("Enter the decimal input: ");
        scanf("%ld", &d_input);

        //logic
        while (d_input != 0)
        {
            B_val = B_val + ((d_input%2) * (pow(10, count_1)));// Digit * 10^(0,1,2,3,4) for units, tens hundreds ...place value
            d_input = d_input / 2; //Keep reducing the quotient
            count_1 ++; //10 power variable
        }
        printf("The binary equivalent is: %ld", B_val);
    }

    else
        printf("Invalid input!\n");
    return 0;
}

void sequence_sum_of_prev_three_logic(int arry[]) //SIZE is 10
{
    for(int i = 1, index = 3; i<=ARRAY_SIZE; i++, index++) //index is needed to move through the array elements arry[0], arry[1], arry[2] // while i decides the number of times the loop runs and terminates when it reaches the size entered by the user
    {
        arry[index] = arry[index-1] + arry[index-2] + arry[index-3];
    }

    for (int i = 0; i<= ARRAY_SIZE; i++)//printing them values upto the size.
    {
        printf("%d ", arry[i]);
    }
}

void pattern_generation_logic()
{
    for(int i = 1; i<=PATTERN_SIZE; i++)//i for rows
    {
        for(int j=PATTERN_SIZE; j>=i; j--)//j for columns
            printf("* ");
        printf("\n");
    }
}

void two_digit_seven_multiple_logic()
{
    printf("The two digit numbers, sum of whose individual digits are multiples of 7 are: ");
    for (int i=1; i<=9; i++)//i is 10's bit
    {
        for (int j=0; j<=9; j++)//j is unit's bit
        {
            if(((i+j) % 7) == 0)
                printf("%d%d ", i,j);
        }
    }
}

int power_of_number_reccurtion_logic(int base, int exponent) //base^exponent
{
    if (exponent == 0) // base condition, without this the program crashes due to infinite recursion as the stack memory gets filled up
        return 1;

   while(exponent != 0)
    {
        return (base * power_of_number_reccurtion_logic(base, (exponent-1))); //multiple times the recursion happens until the exponent becomes zero and value returned is 1
    }
    return 0;
}

int factorial_logic(int num)
{
    if (num == 0)
        return 1;
    else
        return (num*factorial_logic(num-1));

    return 0;
}

void math_menu_using_header_logic()
{
    char ch = 'y';//to check for continuation from the user


    do
    {
        float number_ip = 0;
        int selection = 0;

        printf("\nSelect:\n1:Square root\n2:Natural log\n3:Log10\n4:power()\n5:Cos(x)\n");

        printf("\nYour selection: ");
        scanf("%d",&selection);

        switch(selection)
        {
             case 1: //square root
                {
                    printf("**Square root**\n");
                    printf("Enter the number to perform square root: ");
                    scanf("%f", &number_ip);

                    if (number_ip == 0 || number_ip < 0)
                    {
                        printf("\nInvalid input!");
                    }
                    else
                    {
                        printf ("\nThe square root of %0.3f is: %0.3f", number_ip, sqrt(number_ip));
                    }

                 break;
                }

            case 2: //natural log
                {
                 printf("**Natural log**\n");
                 printf("Enter the number to perform natural log: ");
                 scanf("%f", &number_ip);

                 if (number_ip == 0 || number_ip < 0)
                    {
                        printf("\nInvalid input!");
                    }
                 else
                 {
                     printf ("\nThe natural log of %0.4f is: %0.3f", number_ip, log(number_ip));
                 }

                    break;
                }

            case 3: //log10(x)
                {
                    printf("**Natural log**\n");
                    if (number_ip == 0 || number_ip < 0)
                     {
                        printf("Invalid input!");
                     }
                    else
                    {
                        printf("Enter the number to perform log10: ");
                        scanf("%f", &number_ip);
                        printf ("\nThe log base 10 of %0.4f is: %0.3f", number_ip, log10(number_ip));
                    }

                    break;
                }

            case 4: //power
                {
                    int expo = 0;

                    printf("Enter the exponent value: ");
                    scanf("%d", &expo);

                    printf("Enter the base number: ");
                    scanf("%f", &number_ip);

                    printf("The power of the number is: %0.3lf", pow(number_ip, expo));
                    break;
                }

            case 5: //Cos(x)
                {
                    printf("Enter the value for which we need to calculate the cos value: ");
                    scanf("%f", &number_ip);
                    printf("The value of Cos is: %0.3lf", cos(number_ip));
                    break;
                }

            default: printf("Invalid input!");
        }

     printf("\n\nDo you want to continue: y/n?\n");
     scanf(" %c", &ch);

    } while (ch == 'y');
}

double recursive_sequence_logic(int x, int odd_num, int terms)
{
    if (odd_num > (terms*2)-1)//if odd numbers keep increasing from 1 like 1,3,5,7,9,11.. if we want 5 terms, we need to go till 9 = ((5*2)-1)
       return 0;

    else
        return (double)(((x*odd_num)/(double)(factorial_logic(odd_num))) + (recursive_sequence_logic(x, (odd_num+2), terms)));//first term is sorted first and all the other elements are called recursively for values and them summed.
}
