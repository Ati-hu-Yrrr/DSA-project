#include<iostream>
#include"QueueArray.cpp"
#include"QueueSLL.cpp"
#include"Queue_DLL.cpp"
using namespace std;

void Queue()
{
	int option;
	while (1)
	{
		system("cls");
		cout<<"WELLCOME TO STACK MENU\n"
		       "PRESS 1 FOR QUEUE IN ARRAY\n"
		       "PRESS 2 FOR QUEUE IN SLL\n"
		       "PRESS 3 FOR QUEUE IN DLL\n"
		       "PRESS 4 FOR RETURN MAIN MENU\n";
		cin>>option;
		switch (option)
		{
			case 1:
        {
            Queue_Array QueueArray;
        }
        break;
        case 2:
        {
            Queue_SLL SLL;
		}
            break;
        case 3:
        {
        	Queue_DLL dll;
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
