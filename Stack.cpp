#include<iostream>
#include"StackArray.cpp"
#include"stack-SLL.cpp"
#include"stack-DLL.cpp"
using namespace std;

void Stack()
{
	int option;
	while (1)
	{
		system("cls");
		cout<<"WELLCOME TO STACK MENU\n"
		       "PRESS 1 FOR STACK IN ARRAY\n"
		       "PRESS 2 FOR STACK IN SLL\n"
		       "PRESS 3 FOR STACK IN DLL\n"
		       "PRESS 4 FOR RETURN MAIN MENU\n";
		cin>>option;
		switch (option)
		{
			case 1:
        {
            Stack_Array stackArray;
        }
        break;
        case 2:
        {
            Stack_SLL SLL;	
		}
            break;
        case 3:
        {
        	Stack_DLL dll;
		}
		break;
        case 4:
            return;
            break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
				
		}
	}
}
