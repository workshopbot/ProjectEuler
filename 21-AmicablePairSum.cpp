#include<iostream>
#include<math.h>


using namespace std;

template<class dataType>
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

        // Prints the entLinkedListire list, no loop or arguments needed
        void printList(dataType itterator)
        {
            Node *cursor = start;
            if(start == nullptr)
            {
                cout<<"The list is Empty \n";
            }
            else
            {
                while(cursor->next != nullptr)
                {
                    cout<<cursor->data<<"\n";
                    cursor = cursor->next;
                    itterator--;
                }
            }
            return;
        }
};

// template <class DataType>
class Factors
{
    private:
    public:
    bool isPrime()
    {
        return 0;
    }
    unsigned int Numofdivisors(unsigned int userNum)
    {
        unsigned int i, counter = 0, limit;
        limit = userNum/2;
        for(i = 1 ; i <= limit ; i++)
        {
            if(userNum%i == 0)
            {
                counter++;                
            }
        }
        return counter;
    }
    int NumOfPrimeFactors(unsigned int userNum)
    {
        unsigned int i, counter = 0, limit, temp;
        temp = userNum;
        limit = userNum/2;
        for(i = 1 ; i <= limit ; i++)
        {
            if(temp%i == 0)
            {
                counter++;
                temp = temp/i;
                cout<<temp<<"\t"<<i<<"\n";

                if(temp == 1)
                    break;
            }
        }
        return counter;

    }

    unsigned int SumOfdivisors(unsigned int userNum)
    {
        unsigned int i, temp = 0, limit, sum = 1;
        limit = userNum/2;
        for(i = 1 ; i <= limit ; i++)
        {
            if(userNum%i == 0)
            {
                temp = userNum/i;
                sum = temp + sum;                
            }
        }
        return sum-userNum;
    }
    // unsigned int LargestFactor(unsigned int userNum)
    // {}
    // unsigned int SumOfPrimeFactors()
    // {}
    // unsigned int LargestPrimeFactors()
    // {}
    
};

int main()
{
    // Calculate the sum proper divisors of all integers till 10000
    LinkedList <unsigned int> list;
    LinkedList <unsigned int> divisors;
    // LinkedList <unsigned int> sumofDivisors;
    Factors numbers;
    unsigned int Sum, Amicable , SumAmicable = 0, temp = 0;

    for(unsigned int i = 0; i<= 10000; i++)
    {
        Sum = numbers.SumOfdivisors(i);
        Amicable = numbers.SumOfdivisors(Sum);
        divisors.insertAtBeginning(Amicable);
        list.insertAtBeginning(Sum);

        // cout << i << "  " << Sum << "  " << Amicable << "\n";
        if(i == Amicable && i != Sum) //perfect numbers DO NOT count as Amicable  numbers
        {
            
            cout<<"FOUND AMICABLE NUMBER " << Amicable << "\n";
            temp = Amicable;
            SumAmicable = temp + SumAmicable;



        }

    }
    
    
    cout << "The number is " << SumAmicable -1 <<"\n";
    // list.printList(10000);

    // Check the linked list (with exception handeling) for Amicable pairs
    // Take Sum as input and check sum of its divisors again, if its same as the itterator, its an amicable pair




}

