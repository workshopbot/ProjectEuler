#include <iostream>
#include <math.h>

using namespace std;

// Returns ptr to array of digits of input num as a stack
// CANNOT GET THIS TO WORK !!!
int *digits_of_num(int);

// prints Array, when given its pointer and length of the array
// Additionall, a message can also be printed
void print_array(const char *message, int *temp_ptr, int _size);

int main()
{
    int test = 12240;
    int Array[5] = {7, 7, 7, 7, 7};
    int *ptrToArray;
    // ptrToArray = digits_of_num(test);
    print_array(NULL, Array, 5);
}

// CANNOT GET THIS TO WORK !!!
// int *digits_of_num(int _number)
// {
//     int __size = 0, _temp = _number, digit;
//     // cout << " And the digits are, in reverse order (queue) ";
//     for (int i = 0; _temp != 0; i++)
//     {

//         _temp = floorf(_temp / 10);
//         __size++;
//     }
//     cout << "Number of Digits is " << __size << "\n";

//     int Digits[__size];
//     for (int i = __size; i >= 0; i--)
//     {
//         // if condition to tackle floor(), otherwise Array[*last_index*] was being set to 0
//         if (i == __size)
//         {
//             Digits[0] = _number;
//         }
//         else
//         {
//             Digits[i] = floorf(_number % 10);
//             _number = _number / 10;
//         }

//         // cout << Digits[i] << "\t";
//     }
//     cout << "\n";
//     return Digits;
// }

void print_array(const char *message, int *temp_ptr, int _size)
{
    int i = 0;
    if (message == nullptr)
    {
        while (i < _size)
        {
            cout << temp_ptr[i] << "\n";
            i++;
        }
    }
    else
    {
        cout << message << "\n";
        while (i < _size)
        {
            cout << temp_ptr[i] << "\n";
            i++;
        }
    }
    // cout << "Address is " << temp_ptr << " and number in location is " << *(temp_ptr) << "\n";
}
