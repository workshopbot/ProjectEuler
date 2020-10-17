#include <iostream>
#include <vector>

// NOT WELL WRITTEN !!!!!!!!

using namespace std;

int main()
{
    vector<int> OddNums;
    // vector<int> sequence;
    // int OddNumbers[600];
    int n = 2, m = 1, Sequence = 0, counter = 0, Sum = 1001 * 1001;
    for (int i = 0; counter <= 505; i++)
    {
        OddNums.push_back(2 * i + 1);
        // cout << "Odd Numbers  " << OddNumbers[i] << "\n";
        if (i <= 4)
        {
            Sequence = Sequence + OddNums[i];
            cout << Sequence << " \t " << i << "\n";
            continue;
        }
        else if (i % n == 0)
        {
            Sequence = Sequence + OddNums[i];
            counter++;
            cout << Sequence << " \t " << i << "\n";
            // continue;
            if (counter % 4 == 0)
            {
                n++;
                // cout << Sequence << " \t " << i << "\n";
            }
        }
    }
}