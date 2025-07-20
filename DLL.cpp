 #include<iostream>
using namespace std;

class Double_linkedlist
{
  public:
    struct Node_DLL
    {
    public:
        int info;
        Node_DLL *next, *prev;
    };
    int choices, item, sitem;
    Node_DLL *start = NULL;
    Node_DLL *ptr = start;
	Double_linkedlist()
    {
        while (1)
        {
            system("cls");
            cout << "(Double Linked List Operation Menu)\n"
                        "\n"
                         "Press 1 for Traverse\n"
						 "Press 2 for Insertion\n"
						 "Press 3 for Deletion\n"
						 "Press 4 for Return Main Menu\n";
			cin >> choices;
            switch (choices)
            {
            case 1:
            {
                Traverse();
            }
            break;
            case 2:
            {
            	 Insertion();
            }
            break;
            case 3:
            {
                Deletion();
            }
            break;
            case 4:
            {
                return ;
            }
            break;
            default:
                cout << "Invalid Choice\n";
                system("pause");
                break;
            }
        }
	}
	
//Traverse
void Traverse ()
    {
	    if(start == NULL)
	    {
		  cout<<"DLL is empty\n";
		  system("pause");
          return;
	   }
	  ptr = start;
        cout << "List is\n";
        while (ptr != NULL)
        {
            cout << "[" << ptr->info << "]\t";
            ptr = ptr->next;
        }
        system("pause");
    }
    
//Insertion
 void Insertion()
    {
        while (1)
        {
            system("cls");
            cout << "(Insertion in DLL)\n"
                         "Press\n"
                         "1 for Insertion at first\n"
                         "2 for Insertion at Last\n"
						 "3 for Insertion at Mid\n" 
                         "4 for return\t";
            cin >> choices;
            switch (choices)
            {
            case 1:
            {
                Insert_AtFirst();
            }
            break;
            case 2:
            {
                Insert_Last_DLL();
            }
            break;
            case 3:
            {
                Insert_Middle_SLL();
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
 // Insertion at First
    void Insert_AtFirst()
    {
        cout << "Enter value you want to insert\t";
        cin >> item;
        Node_DLL *ptr = new Node_DLL();
        ptr->prev = NULL;
        ptr->info = item;
        ptr->next = start;
        if (start == NULL)
        {
            start = ptr;
            return;
        }
        start->prev = ptr;
        start = ptr;
    }

 // Insertion At Last
    void Insert_Last_DLL()
    {
        cout << "Enter value you want to insert\t";
        cin >> item;
        Node_DLL *ptr = new Node_DLL();
        ptr->info = item;
        ptr->next = NULL;
        if (start == NULL)
        {
            ptr->prev = NULL;
            start = ptr;
        }
        else
        {
            Node_DLL *ptr1 = start;
            while (ptr1->next != NULL)
            {
                ptr1 = ptr1->next;
            }
            ptr1->next = ptr;
            ptr->prev = ptr1;
        }
    }
// Insertion in Middle
    void Insert_Middle_SLL()
    {
        system("cls");
        cout << "(Insertion in Middle in DLL)\n"
                     "Press\n"
                     "1 for Insertion by given Node_DLL\n"
                     "2 for Insertion by exactly middle Node_DLL\t";
        cin >> choices;
        switch (choices)
        {
        case 1:
        {
            Insert_Mid_Given_Node_DLL();
        }
        break;
        case 2:
        {
            Insert_Exactly_Mid();
        }
        break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

//Insertion at Given node
void Insert_Mid_Given_Node_DLL()
    {
    	if(start==NULL)
    	{
    	cout<<"YOUR LINKED LIST IS EMPTY\n"
    	      "Your are going to insert AT FIRST in Linked List\n"
    	      "Enter the Number you want to insert\n";
    	cin>>item;	
    	Node_DLL *ptr = new Node_DLL();
    	ptr->info=item;
    	ptr->next=NULL;
    	ptr->prev=NULL;
		start=ptr;
		return; 	
		}
        
        system("cls");
        cout << "(Insert by Ref of Given in DLL)\n"
                     "Press\n"
                     "1 for Insert Before Given Node_DLL\n"
                     "2 for Insert After Given Node_DLL\t";
        cin >> choices;
        switch (choices)
        {
        case 1:
        {
            Inset_Before_Node_DLL();
        }
        break;
        case 2:
        {
            Insert_After_Node_DLL();
        }
        break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

//Insertion at Before given Node
void Inset_Before_Node_DLL()
    {
        cout << "Enter the item Before which you want to insert a Node_DLL\t";
        cin >> sitem;
        if (start->info == sitem)
        {
            cout << "Enter value you want to insert\t";
            cin >> item;
            Node_DLL *ptr = new Node_DLL();
            ptr->info = item;
            ptr->prev = NULL;
            ptr->next = start;
            start->prev = ptr;
            start = ptr;
            return;
        }
        Node_DLL *ptr1 = start;
        while ((ptr1 != NULL) && (ptr1->info != sitem))
        {
            ptr1 = ptr1->next;
        }
        if (ptr1 == NULL)
        {
            cout << "Requried Item not found\n";
            system("pause");
            return;
        }
        cout << "Enter value you want to insert\t";
        cin >> item;
        Node_DLL *ptr = new Node_DLL();
        ptr->info = item;
        ptr->next = ptr1;
        ptr->prev = ptr1->prev;
        
    }

//Insertion at after given node

 void Insert_After_Node_DLL()
    {
    	
        cout << "Enter the item After which you want to insert a Node_DLL\t";
        cin >> sitem;
        Node_DLL *ptr1 = start;
        while ((ptr1 != NULL) && (ptr1->info != sitem))
        {
            ptr1 = ptr1->next;
        }
        if (ptr1 == NULL)
        {
            cout << "Item not found\n";
            system("pause");
            return;
        }
        cout << "Enter value you want to insert\t";
        cin >> item;
        Node_DLL *ptr = new Node_DLL();
        ptr->info = item;
        ptr->prev = ptr1;
        ptr->next = ptr1->next;
        if (ptr1->next != NULL)
        {
            ptr1->next->prev = ptr;
        }
        ptr1->next = ptr;
    }
    
 // Insertion by Refrence of Exactly Middle Node_DLL
    void Insert_Exactly_Mid()
    {
        system("cls");
        cout << "(Insert Exact Mid in DLL)\n"
                     "Press\n"
                     "1 for Insert Before Middle Node_DLL\n"
                     "2 for Insert After Middle Node_DLL\t";
        cin >> choices;
        switch (choices)
        {
        case 1:
        {
            Insert_Before_Exact_Mid();
        }
        break;
        case 2:
        {
            Insert_After_Exact_Mid();
        }
        break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

    // Insert Before Exactly Middle
    void Insert_Before_Exact_Mid()
    {
    	
        Node_DLL *ptr = new Node_DLL();
        cout << "Enter value you want to insert\t";
        cin >> item;
        ptr->info = item;
        if ((start == NULL) || (start->next == NULL))
        {
            ptr->next = start;
            ptr->prev = NULL;
            if (start != NULL)
            {
                start->prev = ptr;
            }
            start = ptr;
            return;
        }
        int count = 0;
        Node_DLL *ptr1 = start;
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
        ptr->prev = ptr1;
        ptr1->next->prev = ptr;
        ptr1->next = ptr;
    }

    // Insert After Exactly Middle
    void Insert_After_Exact_Mid()
    {
    	
        Node_DLL *ptr = new Node_DLL();
        cout << "Enter value you want to insert\t";
        cin >> item;
        ptr->info = item;
        if (start == NULL)
        {
            ptr->prev = NULL;
            ptr->next = NULL;
            start = ptr;
            return;
        }
        int count = 0;
        Node_DLL *ptr1 = start;
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
        ptr->prev = ptr1;
        if ((count == 1) || (count == 2))
        {
            ptr->next = NULL;
            ptr1->next = ptr;
            return;
        }
        ptr->next = ptr1->next;
        ptr1->next->prev = ptr;
        ptr1->next = ptr;
    }
// Deletion
    void Deletion()
    {
        if (start == NULL)
        {
            std::cout << "Linked List is Empty\n";
            system("pause");
            return;
        }
        while (1)
        {
            system("cls");
            cout << "(Deletion in DLL)\n"
                         "Press\n"
                         "1 for Deleteion at First\n"
                         "2 for Deleteion at Last\n"
                         "3 for Deleteion at Mid\n"
                         "4 for Return\t";
            cin >> choices;
            if ((choices <= 3) && (start == NULL))
            {
                cout << "Linked List is Empty\n";
                system("pause");
                return;
            }
            switch (choices)
            {
            case 1:
            {
                Deletion_First_DLL();
            }
            break;
            case 2:
            {
                Deleion_Last_DLL();
            }
            break;
            case 3:
            {
                Deletion_Middle();
            }
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
    
 // Deletion at First
    void Deletion_First_DLL()
    {
        Node_DLL *ptr = start;
        start = start->next;
        if (start != NULL)
        {
            start->prev = NULL;
        }
        delete (ptr);
    }

    // Deletion at Last
    void Deleion_Last_DLL()
    {
        if (start->next == NULL)
        {
            Node_DLL *ptr = start;
            start = NULL;
            delete (ptr);
            return;
        }
        Node_DLL *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        delete (ptr);
    }
    
 // Deletion of Middle
    void Deletion_Middle()
    {
        system("cls");
        cout << "(Deletion in Mid in DLL)\n"
                     "Press\n"
                     "1 for deletion of Given Item\n"
                     "2 for deletion of Exact Middle\t";
        cin >> choices;
        switch (choices)
        {
        case 1:
        {
            Deletion_Mid_Item_DLL();
        }
        break;
        case 2:
        {
            Deletion_Exact_Middle_DLL();
        }
        break;
        default:
            cout << "Invalid Selection\n";
            system("pause");
            break;
        }
    }

    // Deletion by given Item
    void Deletion_Mid_Item_DLL()
    {
        cout << "Enter value you want to delete\t";
        cin >> sitem;
        if (start->info == sitem)
        {
            Node_DLL *ptr = start;
            start = start->next;
            if (start != NULL)
            {
                start->prev = NULL;
            }
            delete (ptr);
            return;
        }
        Node_DLL *ptr = start;
        while ((ptr != NULL) && (ptr->info != sitem))
        {
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            cout << "Item not Found\n";
            system("pause");
            return;
        }
        Node_DLL *ptr1 = ptr;
        ptr->prev->next = ptr->next;
        if (ptr->next != NULL)
        {
            ptr->next->prev = ptr->prev;
        }
        delete (ptr1);
    }

    // Deletion of Exact Middle
    void Deletion_Exact_Middle_DLL()
    {
        if (start->next == NULL)
        {
            Node_DLL *ptr = start;
            start = NULL;
            delete (ptr);
            return;
        }
        int count = 0;
        Node_DLL *ptr = start;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        int mid = (count / 2) + 1;
        ptr = start;
        for (int i = 0; i < (mid - 1); i++)
        {
            ptr = ptr->next;
        }
        Node_DLL *ptr1 = ptr->prev;
        if (ptr->next != NULL)
        {
            ptr1->next = ptr->next;
            ptr->next->prev = ptr1;
        }
        else
        {
            ptr1->next = NULL;
        }
        delete (ptr);
    }


    
    

};
