// Linked list and associated stuff - inserting, traversing and other basic algorithms
#include<iostream>
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

        // Prints the entire list, no loop or arguments needed
        void printList()
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
                }
            }
            return;
        }
};




// int main()
// {
//     int index, fill, deleted;
//     LinkedList list;
//     // LinkedList<int> list;
//     cout<<"Enter the size of Link list ";
//     cin>>fill;
//     cout<<"\n";    
//     for (int i = 0; i <= fill; i++)
//     {
//         list.insertAtBeginning(rand());
//     }
//     list.printList();
//     cout<<"\nEnter index to delete the number ";
//     cin>>index;
//     deleted = list.deleteAtBeginning();
//     cout<<"The deleted number is "<<deleted<<"\n";
//     cout<<"\nThe new Linked list is \n";
//     list.printList();


//     return 0;
// }

// C:/Program Files(x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.23.28105/include