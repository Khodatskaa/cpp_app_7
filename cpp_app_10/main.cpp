#include "func.h"

int main()
{
    int choice = 0;

    cout << "Enter the operation number: ";
    cout << "1. Display a rectangle";
    cout << "2. Calculate factorial of number";
    cout << "3. Check if the number is prime";
    cout << "4. Cube of number";
    cout << "5. Largest of two numbers";
    cout << "6. Check if the number is positive";
    cout << "7. Calculate power";
    cout << "8. Calculate sum in range";
    cout << "9. Find perfect numbers in range";
    cout << "10. Print a card";
    cout << "11. Check lucky number";
    cin >> choice;

    switch (choice)
    {
        case 1:  //rectangle
        {
            int height, width;

            cout << "Enter height of rectangle: ";
            cin >> height;

            cout << "Enter width of rectangle: ";
            cin >> width;
            break;
        }
        
        case 2:  //factorial
        {
            int number, result = 0;

            cout << "Enter a number: ";
            cin >> number;

            if (result == 0)
            {
                cout << "Factorial is not defined for negative numbers" << endl;
            }
            else {
                cout << "Factorial of " << number << " is " << result << endl;
            }
            break;
        }

        case 3:  //prime number
        {
            int number, result = 0;

            cout << "Enter a number: ";
            cin >> number;

            if (result == 1) {
                cout << number << " is a prime number" << endl;
            }
            else {
                cout << number << " is not a prime number" << endl;
            }
            break;
        }

        case 4:  //cube
        {
            int number, result;

            cout << "Enter a number: ";
            cin >> number;

            cout << "The cube of " << number << " is " << result << endl;
            break;
        }

        case 5:  //largest number
        {
            int number1, number2, largest;

            cout << "Enter first number: ";
            cin >> number1;

            cout << "Enter second number: ";
            cin >> number2;

            cout << "The largest number is: " << largest << endl;
            break;
        }

        case 6:  //positive number
        {
            int number, isPositiveNum;

            cout << "Enter a number: ";
            cin >> number;

            if (isPositiveNum == 1)
            {
                cout << "The number is positive" << endl;
            }
            else {
                cout << "The number is not positive" << endl;
            }
            break;
        }

        case 7:  //power
        {
            int base, exponent, result;

            cout << "Enter the base: ";
            cin >> base;

            cout << "Enter the exponent: ";
            cin >> exponent;

            cout << base << " raised to the power of " << exponent << " is " << result << endl;
            break;
        }

        case 8:  //sum
        {
            int number1, number2, sum;

            cout << "Enter first number: ";
            cin >> number1;

            cout << "Enter second number: ";
            cin >> number2;

            cout << "The sum of numbers in the range from " << number1 << " to " << number2 << " is " << sum << endl;
            break;
        }

        case 9: //interval
        {
            int start, end;

            cout << "Enter the starting point of the interval: ";
            cin >> start;

            cout << "Enter the ending point of the interval: ";
            cin >> end;

            cout << "Perfect numbers in the interval [" << start << ", " << end << "]:\n";
            break;
        }

        case 10: // card
        {
            int card;

            cout << "Enter the card representation (0-51): ";
            cin >> card;
            break;
        }

        case 11:  //lucky number
        {
            int number;

            cout << "Enter a number: ";
            cin >> number;

            bool isLucky = isLuckyNumber(number);
            if (isLucky)
            {
                cout << number << " is a lucky number " << endl;
            }
            else
            {
                cout << number << " is not a lucky number " << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice" << endl;
            break;
    }

}
