#include<iostream>
using namespace std;
class Queue_SLL
{
public:
    struct Node_SLL
    {
    public:
        int info;
        Node_SLL *next;
    };
    Node_SLL *F, *R;
    int choice, item;

    Queue_SLL()
    {
        SimpleQueue_DLL();
    }

    // Simple Queue
    void SimpleQueue_DLL()
    {
        F = NULL, R = NULL;
        while (1)
        {
            system("cls");
            cout << "(Simple Queue on SLL)\n"
                         "Press\n"
                         "1)Insertion\n"
                         "2)Deletion\n"
                         "3)Traverse\n"
                         "4)Return\t";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                Enqueue_SLL();
            }
            break;
            case 2:
            {
                Dequeue_SLL();
            }
            break;
            case 3:
            {
                Display_Simple_Queue();
            }
            break;
            case 4:
            {
                return;
            }
            break;

            default:
            {
                cout << "Invalid Selection\n";
                system("pause");
            }
            break;
            }
        }
    }

    // Enqueue SLL
    void Enqueue_SLL()
    {
        Node_SLL *ptr = new Node_SLL();
        cout << "Enter the value you want to insert\t";
        cin >> item;
        ptr->info = item;
        ptr->next = NULL;
        if (R == NULL)
        {
            F = ptr;
            R = ptr;
        }
        else
        {
            R->next = ptr;
            R = ptr;
        }
    }

    // Dequeue SLL
    void Dequeue_SLL()
    {
        if (F == NULL)
        {
            cout << ("Queue is Empty\n");
            system("pause");
            return;
        }
        Node_SLL *ptr = F;
        if (F->next == NULL)
        {
            F = NULL;
            R = NULL;
        }
        else
        {
            F = F->next;
        }
        delete (ptr);
    }

    // Display Simple Queue
    void Display_Simple_Queue()
    {
        if (F == NULL)
        {
            cout << "Linked List is Empty\n";
            system("pause");
            return;
        }
        Node_SLL *ptr = F;
        cout << "List is:\n";
        while (ptr != R)
        {
            cout << "[" << ptr->info << "]\t";
            ptr = ptr->next;
        }
        cout << "[" << ptr->info << "]\t";
        system("pause");
    }

};
