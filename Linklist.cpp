#include <iostream>
#include <conio.h>
#include"SLL.cpp"
#include"DLL.cpp"
using namespace std;
	
void Linked_List()
{
    int ll;
    while (true)
    {
        system("cls");
        cout << "(Linked List Menu)\n"
                    "\n"
                     "Choose Linked List\n"
                     "1)Single Linked List\n"
                     "2)Double Linked List\n"
                     "3)Return to main menu\n";
        cin >> ll;
        switch (ll)
        {
        case 1:
        {
            Single_LinkedList sll;
        }
        break;
        case 2:
        {
            Double_linkedlist dll;	
		}
            break;
        case 3:
            return;
            break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
        }
    }
}

