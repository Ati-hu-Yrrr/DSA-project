#include<iostream>
using namespace std ;

class  Single_LinkedList
{
	public:
	int choice;
	int Item,sItem;
	struct Node_SLL
    {
    public:
        int info;
        Node_SLL *next;
    };

    Node_SLL *start = NULL;
    
    
     Single_LinkedList()
    {
        while (1)
        {
            system("cls");
            cout << "(Single Linked List Menu)\n"
                    "\n"
                         "Select your Operation \n"
                    "\n"
                         "1) Press 1 for Traverse Operation\n"
                         "2) Press 2 for Insertion Operation\n"
                         "3) Press 3 for deletion Operation\n"
                         "4) Press 4 Return Main Menu\n";
                         cin >> choice;

            switch (choice)
            {
            case 1:
            	{
				
                Traverse();
                }
				break;
			case 2:
			    {
			    Insertion ();
                }
                break;
            case 3:
            	{
            	Deletion ();
				}
				break;
            case 4:
			    {
			return ;
                }
            break;
            default:
            	{
				
                cout << "\nInvalid Selection";
                system("pause");
                }
                break;
            }
        }
    }
 void Traverse()
    {
        Node_SLL*ptr = start;
        if (ptr == NULL)
        {
            cout << "List is Empty\n";
            system("pause");
            return;
        }
        cout << "List is\n";
        while (ptr != NULL)
        {
            cout << "[" << ptr->info << "]\t";
            ptr = ptr->next;
        }
        system("pause");
        
    }
    void Insertion()
    {
        while (true)
        {
            system("cls");
            cout << "(Insertion in SLL Menu)\n"
                         "Select desired Option\n"
                         "1) Press 1 for Insertion at First\n"
                         "2) Press 2 for Insertion at Last\n"
                         "3) Press 3 for Insertion at Mid\n"
                         "4) Press 4 for Return\t";
            cin >> choice;
            switch (choice)
            {
            case 1:
                Insert_First();
                break;
            case 2:
                Insert_Last();
                break;
            case 3:
                Insert_Middle_SLL();
                break;
            case 4:
            {
			return;
			}
            break;
            default:
                cout << "Invalid Selection\n";
                system("pause");
                break;
            }
        }
    }

    // Insert At First
    void Insert_First()
    {
        cout << "Enter the value you want to insert\t";
        cin >> Item;
        Node_SLL *ptr = new Node_SLL();
        ptr->info = Item;
        ptr->next = start;
        start = ptr;
    }

    // Insertion at Last
    void Insert_Last()
    {
        cout << "Enter the value you want to insert\n";
        cin >> Item;
        Node_SLL *ptr = new Node_SLL();
        ptr->info = Item;
        ptr->next = NULL;
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            Node_SLL *ptr1 = start;
            while ((ptr1->next) != NULL)
            {
                ptr1 = ptr1->next;
            }
            ptr1->next = ptr;
        }
    }

// Insertion in Middle
    void Insert_Middle_SLL()
    {
        system("cls");
        cout << "(Insertion in Middle in SLL)\n"
                     "Press\n"
                     "1 for Insertion by refrence of given Node_SLL\n"
                     "2 for Insertion by exactly middle Node_SLL\t";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Insert_Mid_Item_SLL();
        }
        break;
        case 2:
        {
            Insert_ExactMid_SLL();
        }
        break;
        default:
            std::cout << "Invalid Selection\n";
            system("pause");
            break;
        }  
    }

// Insert Mid by Refrence of Item
    void Insert_Mid_Item_SLL()
    {
    	if(start==NULL)
    	{
    	cout<<"YOUR LINKED LIST IS EMPTY\n"
    	          "Your are going to insert AT FIRST in Linked List\n"
    	          "Enter the Number you want to insert\n";
        cin >> Item;
        Node_SLL *ptr = new Node_SLL();
        ptr->info = Item;
        ptr->next = start;
        start = ptr;
		}
        system("cls");
        cout << "(Insert by Ref of Given in SLL)\n"
                     "Press\n"
                     "1 for Insertion before Node\n"
                     "2 for Insertion after Node\t";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Insert_Mid_beforeNode_SLL();
        }
        break;
        case 2:
        {
            Insert_Mid_AfterNode_SLL();
        }
        break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

    // Insertion in Middle after Given Node_SLL
    void Insert_Mid_AfterNode_SLL()
    {
        cout << "Enter the value after which you want to insert a Node_SLL\t";
        cin >> sItem;
        Node_SLL *ptr1 = start;
        while ((ptr1 != NULL) && (ptr1->info != sItem))
        {
            ptr1 = ptr1->next;
        }
        if (ptr1 == NULL)
        {
            cout << "Given value not found\n";
            system("pause");
            
            
        }
        cout << "Enter the value you want to insert\t";
        cin >> Item;
        Node_SLL *ptr = new Node_SLL();
        ptr->info = Item;
        ptr->next = ptr1->next;
        ptr1->next = ptr;
        
       
    }

    // Insert in Middle Before Given Node_SLL
    void Insert_Mid_beforeNode_SLL()
    {
        cout << "Enter the value before which you want to insert a Node_SLL\t";
        cin >> sItem;
        Node_SLL *ptr1 = start;
        if (ptr1->info == sItem)
        {
            Node_SLL *ptr = new Node_SLL();
            cout << "Enter the value you want to insert\t";
            cin >> Item;
            ptr->info = Item;
            ptr->next = start;
            start = ptr;
            
            return;
        }
        while ((ptr1->next != NULL) && (ptr1->next->info != sItem))
        {
            ptr1 = ptr1->next;
        }
        if (ptr1->next == NULL)
        {
            std::cout << "Item not found\n";
            system("pause");
            
        }
        cout << "Enter the value you want to insert\t";
        cin >> Item;
        Node_SLL *ptr = new Node_SLL();
        ptr->info = Item;
        ptr->next = ptr1->next;
        ptr1->next = ptr;
        
    }
    
// Insertion in middle by refrence of Exact Mid
    void Insert_ExactMid_SLL()
    {
    	system("cls");
        std::cout << "(Insert Exact Mid in SLL)\n"
                     "Press\n"
                     "1) Insertion Before Exact\n"
                     "2) Insertion After Exact\t";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Insert_Before_ExactMid_SLL();
        }
        break;
        case 2:
        {
            Insert_After_ExactMid_SLL();
        }
        break;
        default:
            std::cout << "Invalid Choice\n";
            system("pause");
            break;
        }
    }

    // Insert Before Exactly Middle
    void Insert_Before_ExactMid_SLL()
    {
        Node_SLL *ptr = new Node_SLL();
        cout << "Enter value you want to insert\t";
        cin >> Item;
        ptr->info = Item;
        if ((start == NULL) || (start->next == NULL))
        {
            ptr->next = start;
            start = ptr;
            return;
        }
        int count = 0;
        Node_SLL *ptr1 = start;
        while (ptr1 != NULL)
        {
            count++;
            ptr1 = ptr1->next;
        }
        int mid = (count / 2) + 1;
        ptr1 = start;
        for (int i = 0; i < mid - 2; i++)
        {
            ptr1 = ptr1->next;
        }
        ptr->next = ptr1->next;
        ptr1->next = ptr;
    }

    // Insert After Exactly Middle
    void Insert_After_ExactMid_SLL()
    {
        Node_SLL *ptr = new Node_SLL();
        cout << "Enter value you want to insert\t";
        cin >> Item;
        ptr->info = Item;
        if (start == NULL)
        {
            ptr->next = NULL;
            start = ptr;
            return;
        }
        int count = 0;
        Node_SLL *ptr1 = start;
        while (ptr1 != NULL)
        {
            count++;
            ptr1 = ptr1->next;
        }
        int mid = (count / 2) + 1;
        ptr1 = start;
        for (int i = 0; i < mid - 1; i++)
        {
            ptr1 = ptr1->next;
        }
        if ((count == 1) || (count == 2))
        {
            ptr->next = NULL;
            ptr1->next = ptr;
            return;
        }
        ptr->next = ptr1->next;
        ptr1->next = ptr;
	}
	
// Deletion
    void Deletion()
    {
        if (start == NULL)
        {
            cout << "Linked List is Empty\n";
            system("pause");
            return;
        }
        while (1)
        {
            system("cls");
            cout << "(Deletion in SLL Menu)\n"
                         "Press\n"
                         "1 for Deleteion at First\n"
                         "2 for Deleteion at Last\n"
                         "3 for Deleteion at Middle\n"
                         "4 for Return\t";
            cin >> choice;
            if ((choice <= 3) && (start == NULL))
            {
                cout << "Linked List is Empty\n";
                system("pause");
                return;
            }
            switch (choice)
            {
            case 1:
            {
                Delete_First_SLL();
            }
            break;
            case 2:
            {
                Delete_Last_SLL();
            }
            break;
            case 3:
            {
                Delete_Mid_SLL();
            }
            break;
            case 4:
            {
                return;
            }
            break;
            default:
                cout << "Invalid Selection\n";
                system("pause");
                break;
            }
        }
    }

// Deletion of First
    void Delete_First_SLL()
    {
        Node_SLL *ptr = new Node_SLL();
        start = start->next;
        delete (ptr);
    }

    // Deletion of Last
    void Delete_Last_SLL()
    {
        if (start->next == NULL)
        {
            Node_SLL *ptr = new Node_SLL();
            start = NULL;
            delete (ptr);
            return;
        }
        Node_SLL *ptr = start;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        Node_SLL *ptr1 = ptr->next;
        ptr->next = NULL;
        delete (ptr1);
    }

    // Deletion of Middle
    void Delete_Mid_SLL()
    {
        system("cls");
        std::cout << "(Deletion in Mid SLL Menu)\n"
                     "Press\n"
                     "1 for deletion of Given Item\n"
                     "2 for deletion of Exact Middle\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Deletion_Mid_Item_SLL();
        }
        break;
        case 2:
        {
            Delete_ExactlyMid_SLL();
        }
        break;
        default:
            std::cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

    // Deletion of Mid by given value
    void Deletion_Mid_Item_SLL()
    {
        std::cout << "Enter value you want to delete\t";
        std::cin >> sItem;
        if (start->info == sItem)
        {
            Node_SLL *ptr = start;
            start = start->next;
            delete (ptr);
            return;
        }
        Node_SLL *ptr = start;
        while ((ptr->next != NULL) && (ptr->next->info != sItem))
        {
            ptr = ptr->next;
        }
        if (ptr->next == NULL)
        {
            std::cout << "Item not Found\n";
            system("pause");
            return;
        }
        Node_SLL *ptr1 = ptr->next;
        ptr->next = ptr1->next;
        delete (ptr1);
    }

    // Deletion of Exactly Middle Node_SLL
    void Delete_ExactlyMid_SLL()
    {
        if (start->next == NULL)
        {
            Node_SLL *del = start;
            start = NULL;
            delete (del);
            return;
        }
        int count = 0;
        Node_SLL *ptr = start;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        int mid = (count / 2) + 1;
        ptr = start;
        for (int i = 0; i < (mid - 2); i++)
        {
            ptr = ptr->next;
        }
        if (count == 2)
        {
            ptr = start->next;
            start->next = NULL;
            delete (ptr);
            return;
        }
        Node_SLL *ptr1 = ptr->next;
        ptr->next = ptr1->next;
        delete (ptr1);
        ptr = NULL;
        delete (ptr);
    }
};

    
