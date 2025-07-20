#include <iostream>
using namespace std;


// Queue Array
class Queue_Array
{
public:
    int choice, F, R, item, size;
    const int lb = 0;
    int *Q;
    int *CQ;
    Queue_Array()
    {
        Choices();
    }
    void Choices()
    {
        while (1)
        {
            system("cls");
            cout << "(Queue on Array)\n"
                         "Select your Choice\n"
                         "1) Press 1 for Simple Queue\n"
                         "2) Press 2 for Circular Queue\n"
                         "3) Press 3 for Returning to Queue Menu\t";
            cin >> choice;
            if (choice==1)
            {
                LinearQ();
            }
            else if (choice==2)
            {
                CircularQ();
            }
            else if (choice==3)
            {
                return;
            }
            else
            {
                cout << "Invalid Selection\n";
                system("pause");
            }
            
        }
    }

    // Linear Q
    void LinearQ()
    {
        system("cls");
        cout << "Enter size of you Queue\n";
        cin >> size;
        Q = new int[size];
        F = lb - 1;
        R = lb - 1;
        while (1)
        {
            system("cls");
            cout << "(Simple Queue on Array Menu)\n"
                         "Select your Opeartion\n"
                         "1)Press 1 for Insertion\n"
                         "2)Press 2 for Deletion\n"
                         "3)Press 3 for Display\n"
                         "4)Press 4 for Returning to Queue_Array menu\t";
            cin >> choice;
            if (choice==1)
            {
                InsertionLQ();
            }
            
            else if (choice==2)
            {
                DeletionLQ();
            }
            
            else if (choice==3)
            {
                DisplayLQ();
            }
            else if (choice==4)
            {
                return;
            }
            
            else
            {
			
                cout << "Invalid Selection\n";
                system("pause");
            }
        }
    }

    // Insertion Linear
    void InsertionLQ()
    {
        if (R == (size + lb - 1))
        {
            cout << "Queue is Full\n";
            system("pause");
            return;
        }
        if (R == (lb - 1))
        {
            R = lb;
            F = lb;
        }
        else
        {
            R++;
        }
        cout << "Enter the value you want to insert\t";
        cin >> item;
        Q[R] = item;
    }

    // Deletion Linear
    void DeletionLQ()
    {
        if (F == lb - 1)
        {
            cout << "Queue is Empty\n";
            system("pause");
            return;
        }
        item = Q[F];
        if (F == R)
        {
            F = lb - 1;
            R = lb - 1;
        }
        else
        {
            F++;
        }
        cout << item << " has been Deleted from Queue\n";
        system("pause");
    }

    // Display Linear
    void DisplayLQ()
    {
        if (F == lb - 1)
        {
            cout << "Queue is Empty\n";
            system("pause");
            return;
        }
        cout << "Queue is\n";
        for (int i = F; i <= R; i++)
        {
            cout << "[" << Q[i] << "]\t";
        }
        system("pause");
    }

    // Circular Quee
    void CircularQ()
    {
        system("cls");
        cout << "Enter size of you Queue\n";
        cin >> size;
        CQ = new int[size];
        F = lb - 1;
        R = lb - 1;
        while (1)
        {
            system("cls");
            cout << "(Circular Queue on Array Menu)\n"
                         "Select your Opeartion\n"
                         "1)Press 1 for Insertion\n"
                         "2)Press 2 for Deletion\n"
                         "3)Press 3 for Display\n"
                         "4)Press 4 for Returning to Queue_Array menu\t";
            cin >> choice;
            if (choice==1)
            {
			
                InsertCQ();
            }
                
            else if (choice==2)
            {
			
                DeleteCQ();
            }
        
            else if (choice==3)
            {
			
                DisplayCQ();
                
			}

            else if (choice==4)
            {
            	return;
			}
            else
            {
			
                cout << "Invalid Selection\n";
                system("pause");
                break;
            }
        }
    }

    // Insert Circular
    void InsertCQ()
    {
        if (R == (F - 1) || ((R == (size + lb - 1)) && (F == lb)))
        {
            cout << "Queue is Full\n";
            system("pause");
            return;
        }
        if (R == (lb - 1))
        {
            R = lb;
            F = lb;
        }
        else
        {
            if (R == (size + lb - 1))
            {
                R = lb;
            }
            else
            {
                R++;
            }
        }
        cout << "Enter the value you want to insert\t";
        cin >> item;
        CQ[R] = item;
    }

    // Delete Circular
    void DeleteCQ()
    {
        if (F == lb - 1)
        {
            cout << "Queue is Empty\n";
            system("pause");
            return;
        }
        item = CQ[F];
        if (F == R)
        {
            F = lb - 1;
            R = lb - 1;
        }
        else
        {
            if (F == (size + lb - 1))
            {
                F = lb;
            }
            else
            {
                F++;
            }
        }
        cout << item << " has been Deleted from Queue\n";
        system("pause");
    }

    // Display Circular
    void DisplayCQ()
    {
        if (F == lb - 1)
        {
            cout << "Queue is Empty\n";
            system("pause");
            return;
        }
        cout << "Queue is\n";
        if (F <= R)
        {
            for (int i = F; i <= R; i++)
            {
                cout << "[" << CQ[i] << "]\t";
            }
        }
        else
        {
            for (int i = lb; i <= R; i++)
            {
                cout << "[" << CQ[i] << "]\t";
            }
            for (int i = F; i <= (size + lb - 1); i++)
            {
                cout << "[" << CQ[i] << "]\t";
            }
        }
        system("pause");
    }
};
