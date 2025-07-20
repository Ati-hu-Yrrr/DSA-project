#include<iostream>
#include"Array.cpp"
#include"Stack.cpp"
#include"Queue.cpp"
#include"Linklist.cpp"



using namespace std;
int main ()
{
	
    int option;
    while(1)
    {
        system("cls");
        cout << "DATA STRUCTURE AND ALGORITHM\n"
                "TEACHER:NAUMAN QADEER\n"
                "NAME: ATIF MEHMOOD\n"
                "Class: 3 B\n"
                "MIS ID: 37391\n"
                "\n"
                "SELECT THE DATA STRUCTURE\n"
                "Press (1) Array\n"
                "Press (2) Stack\n"
				"Press (3) Queue\n" 
				"Press (4) LinkList\n"
			    "Press (5) TO EXIT\n";
        cin >> option;
        switch(option)
        {
            case 1:
            {
                Array array;
                
            }
            break;
            case 2:
            {
                Stack();
            }
            break;
            case 3:
            	{
            	Queue();	
            		
				}
				break;
			case 4:
			{
				Linked_List() ;
			}
			    break;	
			case 5:
			{
				exit (0);
			}	
			break;
            default:
            cout << "Invalid Selection \n";
            system("pause");
        }

    }
    return 0;
}
