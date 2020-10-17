#include <iostream>
#include "math.h"

using namespace std;
template <class dataType>
class LinkedList
{
private:
    struct Node
    {
        dataType data;
        Node *next;
        // Node* Start;
    };
    Node *start;

public:
    LinkedList()
    {
        // Allocating Memory constructor ??
        start = nullptr;
    }
    void insertAtBeginning(dataType data)
    {
        Node *temp;
        temp = new Node;
        temp->data = data;
        temp->next = start;
        start = temp;
    }

    void insertAtEnd(dataType data)
    {
        Node *cursor = start;
        Node *tempNode = new Node;
        tempNode->data = data;
        tempNode->next = nullptr;
        while (cursor->next != nullptr)
        {
            cursor = cursor->next;
        }
        cursor->next = tempNode;
    }

    Node *searchItem(dataType item)
    {
        Node *cursor = start;
        while (cursor->next != nullptr)
        {
            cursor = cursor->next;
            if (cursor->data == item)
                return cursor;
        }
        return nullptr;
    }

    dataType deleteAtBeginning()
    {
        Node *first = start;
        start = start->next;
        dataType temp = start->data;
        delete first;
        return temp;
    }

    dataType deleteAtIndex(dataType index)
    {
        Node *cursor = start;
        if (index == 0)
        {
            start = start->next;
        }
        else
        {
            for (dataType i = 2; i < index; i++)
            {
                if (cursor->next == nullptr)
                {
                    return 0;
                    // throw invalid_argument("Invalid index");
                }
                cursor = cursor->next;
            }
            Node *cursorPrev = cursor;
            cursor = cursor->next;
            cursorPrev->next = cursor->next; //The address of previous Node is stored after skipping the Node to be deleted
        }
        dataType tempData = cursor->data;
        delete cursor;
        return tempData;
    }

    dataType deleteAtEnd()
    {
        Node *cursor = start;
        Node *cursorPrev = start;
        while (cursor->next != nullptr)
        {
            cursorPrev = cursor;
            cursor = cursor->next;
        }
        cursorPrev->next = nullptr;
        dataType temp = cursor->data;
        delete cursor;
        return temp;
    }

    // Prints the entire list, no loop or arguments needed
    void printList()
    {
        Node *cursor = start;
        if (start == nullptr)
        {
            cout << "The list is Empty \n";
        }
        else
        {
            while (cursor->next != nullptr)
            {
                cout << cursor->data << "\n";
                cursor = cursor->next;
            }
        }
        return;
    }
};

class Factors
{
private:
public:
    bool isPrime()
    {
        return 0;
    }

    // Returns Number of divisors  input number has
    unsigned long int Numofdivisors(unsigned long int userNum)
    {
        unsigned long int i, counter = 0, limit;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (userNum % i == 0)
            {
                counter++;
            }
        }
        return counter;
    }

    // Returns No. of Prime Factors, unsure if 1, 2 are considered
    int NumOfPrimeFactors(unsigned long int userNum)
    {
        unsigned long int i, counter = 0, limit, temp;
        temp = userNum;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (temp % i == 0)
            {
                counter++;
                temp = temp / i;
                cout << temp << "\t" << i << "\n";

                if (temp == 1)
                    break;
            }
        }
        return counter;
    }

    // Returns Sum of Proper Divisors (Less than the number)
    unsigned long int SumOfDivisors(unsigned long int userNum)
    {
        unsigned long int i, temp = 0, limit, sum = 1;
        limit = userNum / 2;
        for (i = 1; i <= limit; i++)
        {
            if (userNum % i == 0)
            {
                temp = userNum / i;
                sum = temp + sum;
            }
        }
        return sum - userNum;
    }
    // unsigned long int LargestFactor(unsigned long int userNum)
    // {}
    // unsigned long int SumOfPrimeFactors()
    // {}
    // unsigned long int LargestPrimeFactors()
    // {}
};

int main()
{
    LinkedList<unsigned long int> NonAbundant;
    Factors myClass;
    unsigned long int NUMBER = 9, DIVISORSUM = 0;
    int userNum, itterator = 0;

    for (int i = 1; i < 500; i++)
    {
        NUMBER++;
        DIVISORSUM = myClass.SumOfDivisors(NUMBER);
        // cout << "The number is, " << NUMBER << " and Sum of Divisors is " << DIVISORSUM << "\n";

        if (DIVISORSUM < NUMBER)
        {
            cout << NUMBER << " is NonAbundant \n";
            NonAbundant.insertAtBeginning(NUMBER);
            // NonAbundant.printList();
        }
    }

    // NonAbundant.printList();

    cout << "\nExecuted Successfully --------------\n";
}
