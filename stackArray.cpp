#include<iostream>
using namespace std;

// Stack on Array
class Stack_Array
{
public:
    int size, item;
    const int lb = 0;
    int Top = (lb - 1);
    int *S;
    Stack_Array()
    {
        system("cls");
        cout << "Enter size of Stack\t";
        cin >> size;
        S = new int[size];
        Choices();
    }
    void Choices()
    {
        int a;
        while (1)
        {
            system("cls");
            cout <<"(Stack on Array Menu)\n"
                     "Enter your choice\n"
                    "1) Press 1 for Traverse\n"
                    "2) Press 2 for Push\n"
                    "3) Press 3 for Pop\n"
                    "4) Press 4 for Returning to Stack Menu\t";
            cin >> a;
            if(a==1)
            {
                Traverse();
            }
            
            else if(a==2)
            {
                Push();
            }
            else if(a==3)
            {
                Pop();
            }
            
            else if (a==4)
            {
                return;
                break;
            }
            
            else
            {
                cout << "Inavlid Selection\n";
                system("pause");
            }
            
        }
    }


    void Traverse()
    {
        if (Top == lb - 1)
        {
            cout << "Stack is Empty\n";
            system("pause");
            return;
        }
        std::cout << "Stack is:\n";
        for (int i = Top; i >= lb; i--)
        {
            cout << "[" << S[i] << "]\t";
        }
        system("pause");
    }

    
    void Push()
    {
        if (Top == (size + lb - 1))
        {
            cout << "Stack is Already full\n";
            system("pause");
            return;
        }
        cout << "Enter the item you want to insert\t";
        cin >> item;
        Top++;
        S[Top] = item;
    }

    
    void Pop()
    {
        if (Top == (lb - 1))
        {
            cout << "Stack is Empty\n";
                 system("pause");
            return;
        }
        item = S[Top];
        Top--;
        cout << "Deleted value is: [" << item << "]\n";
        system("pause");
    }
};
