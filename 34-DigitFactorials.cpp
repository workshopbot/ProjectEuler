#include <iostream>
#include <math.h>

using namespace std;

unsigned int DigitFactorialSums(unsigned int _number);
unsigned int factorial(unsigned int num);

int main()
{
    unsigned int test = 10, result;

    // result = DigitFactorialSums(test);
    // cout << result << "\n";

    for (unsigned int i = 1; i < 1000; i++)
    {
        result = DigitFactorialSums(i);
        // cout << "Number is " << i << " digit factorial sum is " << result << '\n';
        if (i == result)
        {
            cout << "SAME " << i << "\n";
        }
    }
}

unsigned int DigitFactorialSums(unsigned int _number)
{
    unsigned int _temp = _number, counter = 0, DigitFactorialSums = 0;
    while (_temp != 0)
    {
        counter++;
        _temp = floorf(_temp / 10);
    }
    for (unsigned int i = 0; i < counter; i++)
    {
        DigitFactorialSums = factorial(_number % 10) + DigitFactorialSums;
        _number = floorf(_number / 10);
    }
    return DigitFactorialSums;
}

unsigned int factorial(unsigned int num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num == 1)
        return 1;
    else
    {
        return num * factorial(num - 1);
    }
}