#include<iostream>
using namespace std;
class Stack_SLL
{
public:
    struct Node_SLL
    {
    public:
        int info;
        Node_SLL *next;
    };
    int choice, item;
    Node_SLL *Top = NULL;

    Stack_SLL()
    {
        while (1)
        {
            system("cls");
            cout << "(Stack on SLL)\n"
                         "Press\n"
                         "1 for Push\n"
                         "2 for Pop\n"
                         "3 for Traverse\n"
                         "4 for Return\t";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                PUSH_SLL();
            }
            break;
            case 2:
            {
                POP_SLL();
            }
            break;
            case 3:
            {
                Traverse_SLL_Stack();
            }
            break;
            case 4:
            {
                return;
            }
            break;
            default:
                cout << "Invalid Choice\n";
                system("pause");
                break;
            }
        }
    }

    // Push in SLL
    void PUSH_SLL()
    {
        Node_SLL *ptr = new Node_SLL();
        cout << "Enter the value you want to Insert\t";
        cin >> item;
        ptr->info = item;
        ptr->next = Top;
        Top = ptr;
    }

    // POP in SLL
    void POP_SLL()
    {
        if (Top == NULL)
        {
            std::cout << "Stack Already Empty, Deletion not Possible\n";
            system("pause");
            return;
        }
        Node_SLL *ptr = Top;
        Top = Top->next;
        delete (ptr);
    }

    // Traverse
    void Traverse_SLL_Stack()
    {
        if (Top == NULL)
        {
            std::cout << "Stack is Empty\n";
            system("pause");
            return;
        }
        Node_SLL *ptr = Top;
        cout << "List is\n";
        while (ptr != NULL)
        {
            cout << "[" << ptr->info << "]\t";
            ptr = ptr->next;
        }
        system("pause");
    }
};
