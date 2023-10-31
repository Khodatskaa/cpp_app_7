#include <iostream>
#include "func.h"

using namespace std;

void showRectangle(int N, int K)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}


void showFactorial(int n, int& result) 
{
    if (n < 0) 
    {
        result = 0;
    }
    else if (n == 0 || n == 1) 
    {
        result = 1;
    }
    else {
        result = 1;
        for (int i = 2; i <= n; i++) 
        {
            result *= i;
        }
    }
}


void isPrime(int number, int& result) 
{
    result = 1;  

    if (number <= 1) 
    {
        result = 0; 
    }
    if (number <= 3) 
    {
        return;     
    }
    if (number % 2 == 0 || number % 3 == 0) 
    {
        result = 0; 
        return;
    }

    for (int i = 5; i * i <= number; i += 6) 
    {
        if (number % i == 0 || number % (i + 2) == 0) 
        {
            result = 0; 
            return;
        }
    }
}


void cube(int number, int& result) 
{
    result = number * number * number;
}


void findLargest(int num1, int num2, int& largest)
{
    if (num1 > num2)
    {
        largest = num1;
    }
    else
    {
        largest = num2;
    }
}


void isPositive(int value, int& isPositive) 
{
    if (value > 0) 
    {
        isPositive = 1; 
    }
    else {
        isPositive = 0; 
    }
}


void calculatePower(int base, int exponent, int& result) 
{
    result = 1;

    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }
}


void calculateSumInRange(int num1, int num2, int& sum) 
{
    sum = 0;

    for (int i = num1; i <= num2; i++) 
    {
        sum += i;
    }
}


void findPerfectNumbersInInterval(int start, int end) 
{
    for (int num = start; num <= end; num++) 
    {
        int sumOfDivisors = 0;
        for (int divisor = 1; divisor <= num / 2; divisor++) 
        {
            if (num % divisor == 0) 
            {
                sumOfDivisors += divisor;
            }
        }
        if (sumOfDivisors == num) 
        {
            cout << num << " is a perfect number" << endl;
        }
    }
}


void displayPlayingCard(int card) 
{
    int rank = card % 13; 
    int suit = card / 13; 

    string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    if (rank >= 0 && rank < 13 && suit >= 0 && suit < 4) 
    {
        cout << "Card: " << ranks[rank] << " of " << suits[suit] << endl;
    }
    else {
        cout << "Invalid card representation." << endl;
    }
}


bool isLuckyNumber(int number) 
{
    int sum = 0;

    while (number > 0) 
    {
        sum += number % 10;
        number /= 10;
    }

    return sum == 7;
}