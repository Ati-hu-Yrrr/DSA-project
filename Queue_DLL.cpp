#include <iostream>
using namespace std;
class Queue_DLL
{
public:
    struct Node_DLL
    {
    public:
        int info;
        Node_DLL *prev, *next;
    };
    Node_DLL *F, *R;
    int choice, item;

    Queue_DLL()
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
            cout << "(Simple Queue on DLL)\n"
                         "Press\n"
                         "1)Insert\n"
                         "2)Delete\n"
                         "3)Display\n"
                         "4)Return\t";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                Enqueue_DLL();
            }
            break;
            case 2:
            {
                Dequeue_DLL();
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

    // Enqueue DLL
    void Enqueue_DLL()
    {
        Node_DLL *ptr = new Node_DLL();
        cout << "Enter the value you want to insert\t";
        cin >> item;
        ptr->info = item;
        ptr->next = NULL;
        ptr->prev = R;
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

    // Dequeue DLL
    void Dequeue_DLL()
    {
        if (F == NULL)
        {
            cout << "Queue is Empty\n";
            system("pause");
            return;
        }
        Node_DLL *ptr = F;
        if (F->next == NULL)
        {
            F = NULL;
            R = NULL;
        }
        else
        {
            F = F->next;
            F->prev = NULL;
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
        Node_DLL *ptr = F;
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
