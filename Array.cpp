#include <iostream>
#include <conio.h>
using namespace std;

class Array
{
public:
	

	int size;
	int K;
	int Item;
	int N = 0;
	static const int LB = 0;
	int *A;
	Array ()
	{
	system("cls");
	cout << "Enter Array size" << endl;
	cin >> size;
	A = new int[size];
	choice();
	}

	void choice ()
	{
	
	int a;
	while (true)
	{
	    system("cls");
		cout << "(1) Traverse" << endl;
		cout << "(2) insertion" << endl;
		cout << "(3) delection" << endl;
		cout << "(4) Searching" << endl;
		cout << "(5) sorting" << endl;
		cout << "(6) Exit" << endl;
		cin >> a;
		if (a == 1)
		{
			Traverse();
			
		}
		else if (a == 2)
		{
			Insertion();
			
		}
		else if (a == 3)
		{
			Deletion();
			
		}
		else if (a == 4)
		{
			system("cls");
			cout << "(1) Single Search" << endl;
			cout << "(2) Multi Search" << endl;
			cout << "(3) Exit" << endl;
			int i;
			cin >> i;
			if (i == 1)
			{
				system("cls");
				int b;
				cout << "(1) SingleSearch_linear" << endl;
				cout << "(2) SingleSearch_Binary" << endl;
				cout << "(3) Return to main menu" << endl;
				cin >> b;
				if (b == 1)
				{
					SingleSearch_linear();
					
				}
				else if (b == 2)
				{
					system("cls");
					cout << "in which Sort your Array sorted" << endl;
					cout << "(1) Ascending order" << endl;
					cout << "(2) Descending Order" << endl;
					cout << "(3) return to main menu" << endl;
					int l;
					cin >> l;
					if (l == 1)
					{
						SingleSearch_Binary_Ascending();
						
					}
					else if (l == 2)
					{
						SingleSearch_Binary_Descending();
						
					}
					else if (l==3)
				    {
					return ;
					
				    }
				    else 
				    {
					cout<<"INVALID SELECTION\n";
					system("pause");
				    }
				}
				else if (b==3)
				{
					return ;
					
				}
				else 
				{
					cout<<"INVALID SELECTION\n";
					system("pause");
				}
			}
			else if (i == 2)
			{
				system("cls");
				cout << "(1) MultiSearch_linear" << endl;
				cout << "(2) MultiSearch_Binary" << endl;
				cout << "(3) Return to main menu" << endl;
				int d;
				cin >> d;
				if (d == 1)
				{
					MultiSearch_linear();
			
				}
				else if (d == 2)
				{
					cout << "in which Sort your Array sorted" << endl;
					cout << "(1) Ascending order" << endl;
					cout << "(2) Descending Order" << endl;
					int i;
					cin >> i;
					if (i == 1)
					{
						MultiSearch_Binary_Ascending();
						
					}
					else if (i == 2)
					{
						MultiSearch_Binary_Descending();
						
					}
					else if (i==3)
					{
					return ;
					break;
					}
					else
					{
						cout<<"INVALID SELECTION\n";
						system("pause");
					}
				}
				else if(d==3)
				{
					return;
					break;
				}
				else
				{
					cout<<"INVALID SELECTION\n";
					system("pause");
				}
			}
		}
		else if (a == 5)
		{
			system("cls");
			cout << "(1) Sorting for Ascending Order" << endl;
			cout << "(2) Sorting for Descending Order" << endl;
			cout << "(3) Return to Main Menu" << endl;
			int d;
			cin >> d;
			if (d == 1)
			{
				system("cls");
				cout << "(1) Bubble Sorting" << endl;
				cout << "(2) Selection Sorting" << endl;
				cout << "(3) Insection Sorting" << endl;
				cout << "(4) Shell Sorting" << endl;
				cout << "(5) Merge Sorting" << endl;
				cout << "(6) quick Sort" << endl;
				cout << "(7) to exit" << endl;
				int q;
				cin >> q;
				if (q == 1)
				{
					Bubble_Sorting_Ascending();
					
				}
				else if (q == 2)
				{
					Seletion_Sorting_Ascending();
					
				}
				else if (q == 3)
				{
					Insection_Sorting_Ascending();
					
				}
				else if (q == 4)
				{
					Shell_Sorting_Ascending();
					
				}
				else if (q == 5)
				{
					Merge_Sorting_Ascending();
					
				}
				else if (q == 6)
				{
					QuickSort_Ascending();
					
				}
				else if (q ==7)
				{
					return;
					break;
				}
				else
				{
					cout<<"INVALID SELECTION\n"	;
					system("pause");
				}
			}
			else if (d == 2)
			{
				system("cls");
				cout << "(1) Bubble Sorting" << endl;
				cout << "(2) Selection Sorting" << endl;
				cout << "(3) Insection Sorting" << endl;
				cout << "(4) Shell Sorting" << endl;
				cout << "(5) Merge Sorting" << endl;
				cout << "(6) Quick Soeting" << endl;
				cout << "(7) Return To Main Menu" << endl;
				int y;
				cin >> y;
				if (y == 1)
				{
					Bubble_Sorting_Descending();
					
				}
				else if (y == 2)
				{
					Seletion_Sorting_Descending();
					
				}
				else if (y == 3)
				{
					Insection_Sorting_Descending();
				
				}
				else if (y == 4)
				{
					Shell_Sorting_Descending();
					
				}
				else if (y == 5)
				{
					Merge_Sorting_Descending();
					
				}
				else if (y == 6)
				{
					QuickSort_Descending();
					
				}
				else if (y==7)
				{
					return;
					break;
				}
				else 
				{
					cout<<"INVALID SELECTION\n";
					system("pause");
				}
			}
			else if (d==3)
			{
				return;
				break;
			}
			else
			{
				cout<<"INVALID SELECTION\n";
				system("pause");
			}
		}
		else if (a==6)
		{
			return;
			break;
		}
		else
		{
			cout<<"INVALID SELECTION\n";
			system("pause");
		}
	}

	}

	void Traverse()
	{
		if (N == 0)
		{
			cout << "array is empty " << endl;
		}
		cout<<"your Array have value:\n";
		for (int i = LB; i <= (N + LB - 1); i++)
		{
			cout << A[i] << endl;
		}
			system("pause");
	};

	void Insertion()
	{
		cout << "Enter the position of array in which insert" << endl;
		cin >> K;
		if (N == size)
		{
			cout << "Array is full" << endl;
			system("pause");
			return;
		}
		if ((K < LB) || (K > (N + LB)))
		{
			cout << "Insection position is invalid" << endl;
			system("pause");
			return;
		}
		cout << "Enter the number you want to enter" << endl;
		cin >> Item;
		for (int G = (N + LB - 1); G >= K; G--)
		{
			A[G + 1] = A[G];
		}
		A[K] = Item;
		N = N + 1;
	}

	void Deletion()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the deletion position of array" << endl;
		cin >> K;
		if ((K < LB) || (K > (N + LB - 1)))
		{
			cout << "Deletion position is invalid" << endl;
			system("pause");
			return;
		}
		cout << A[K] << endl;
		for (int G = K + 1; G <= (N + LB - 1); G++)
		{
			A[G - 1] = A[G];
		}
		N = N - 1;
	}

	void SingleSearch_linear()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the value you want to search" << endl;
		cin >> Item;
		for (int i = LB; i <= (N + LB - 1); i++)
		{
			if (A[i] == Item)
			{
				cout << "Item Found" << endl;
				system("pause");
				return;
			}
		}
		cout << Item << "Not found" << endl;
		system("pause");
	}

	void SingleSearch_Binary_Ascending()
	{
		int Low = LB;
		int High = (N + LB - 1);
		int Mid = (Low + High) / 2;
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the value you want to search" << endl;
		cin >> Item;
		while (Low <= High)
		{
			if (A[Mid] == Item)
			{
				cout << Item << "Found" << endl;
				system("pause");
				return;
			}
			else if (Item < A[Mid])
			{
				High = Mid - 1;
			}
			else
			{
				Low = Mid + 1;
			}
			cout << Item << "Not Found" << endl;
			system("pause");
			break;
		}
	}
	void SingleSearch_Binary_Descending()
	{
		int Low = LB;
		int High = (N + LB - 1);
		int Mid = (Low + High) / 2;
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the value you want to search" << endl;
		cin >> Item;
		while (Low <= High)
		{
			if (A[Mid] == Item)
			{
				cout << Item << "Found" << endl;
				system("pause");
				return;
			}
			else if (Item > A[Mid])
			{
				High = Mid - 1;
			}
			else
			{
				Low = Mid + 1;
			}
			cout << Item << "Not Found" << endl;
			system("pause");
			break;
		}
	}

	void MultiSearch_linear()
	{
		int count = 0;

		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the value you want to serach" << endl;
		cin >> Item;
		for (int G = LB; G <= (N + LB - 1); G++)
		{
			if (A[G] == Item)
			{
				count = count + 1;
			}
		}
		if (count == 0)
		{
			cout << Item << "Not Found" << endl;
			system("pause");
		}
		else
		{
			cout << Item << "Found" << count << "Times" << endl;
			system("pause");
		}
	}

	void MultiSearch_Binary_Ascending()
	{
		int Low = LB;
		int High = (N + LB - 1);
		int count = 0;
		int Mid;
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return ;
		}
		cout << "Enter the value you want to search" << endl;
		cin >> Item;
		while (Low <= High)
		{
			Mid = (Low + High) / 2;
			if (A[Mid] == Item)
			{
				count++;
				int i = Mid + 1;
				while ((i < (N + LB)) && (A[i] == Item))
				{
					count = count + 1;
					i = i + 1;
				}

				i = Mid - 1;
				while ((i >= LB) && (A[i] == Item))
				{
					count = count + 1;
					i = i - 1;
				}
				cout << Item << "Found" << count << "Times" << endl;
				system("pause");
				return;
			}
			else if (A[Mid] > Item)
			{
				High = Mid - 1;
			}
			else
			{
				Low = Mid + 1;
			}
		}
		cout << "Item Not Found" << endl;
		system("pause");
	}

	void MultiSearch_Binary_Descending()
	{
		int Low = LB;
		int High = (N + LB - 1);
		int count = 0;
		int Mid;
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		cout << "Enter the value you want to search" << endl;
		cin >> Item;
		while (Low <= High)
		{
			Mid = (Low + High) / 2;
			if (A[Mid] == Item)
			{
				count++;
				int i = Mid - 1;
				while ((i < (N + LB)) && (A[i] == Item))
				{
					count = count + 1;
					i = i - 1;
				}

				i = Mid + 1;
				while ((i >= LB) && (A[i] == Item))
				{
					count = count + 1;
					i = i + 1;
				}
				cout << Item << "Found" << count << "Times" << endl;
				system("pause");
				return;
			}
			else if (A[Mid] > Item)
			{
				High = Mid - 1;
			}
			else
			{
				Low = Mid + 1;
			}
		}
		cout << "Item Not Found" << endl;
		system("pause");
	}

	void Bubble_Sorting_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int last = (N + LB - 1);
		for (int h = LB; h <= (N - 1); h++)
		{
			for (int i = LB; i <= (last - 1); i++)
			{
				if (A[i] > A[i + 1])
				{
					swap(A[i], A[i + 1]);
				}
			}
			last = last - 1;
		}
		cout << "Your array is sorted Ascending By Bubble" << endl;
		system("pause");
		return;
	}
	void Bubble_Sorting_Descending()

	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int last = (N + LB - 1);
		for (int h = LB; h <= (N - 1); h++)
		{
			for (int i = LB; i <= (last - 1); i++)
			{
				if (A[i] < A[i + 1])
				{
					swap(A[i], A[i + 1]);
				}
			}
			last = last - 1;
		}
		cout << "Your array is sorted Descending By Bubble" << endl;
		system("pause");
		return;
	}
	void Seletion_Sorting_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int First = LB;
		for (int h = LB; h <= (N - 1); h++)
		{
			int min_loc = First;
			for (int i = (First + 1); i < (N + LB - 1); i++)
			{
				if (A[min_loc] > A[i])
				{
					min_loc = i;
				}
			}
			swap(A[min_loc], A[First]);
			First++;
		}
		cout << "Your array is sorted Ascending By Seletion" << endl;
		system("pause");
		return;
	}

	void Seletion_Sorting_Descending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int First = LB;
		for (int h = LB; h <= (N - 1); h++)
		{
			int max_loc = First;
			for (int i = (First + 1); i < (N + LB - 1); i++)
			{
				if (A[max_loc] < A[i])
				{
					max_loc = i;
				}
			}
			swap(A[max_loc], A[First]);
			First++;
		}
		cout << "Your array is sorted Descending By Seletion" << endl;
		system("pause");
		return;
	}

	void Insection_Sorting_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		for (int Last = (LB + 1); Last <= (N + LB - 1); Last++)
		{
			int min = A[Last];
			int i = Last - 1;
			while ((i >= LB) && (A[i] > min))
			{
				A[i + 1] = A[i];
				i--;
			}
			A[i + 1] = min;
		}
		cout << "Your array is sorted Ascending By Insection";
		system("pause");
		return;
	}

	void Insection_Sorting_Descending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		for (int Last = (LB + 1); Last <= (N + LB - 1); Last++)
		{
			int max = A[Last];
			int i = Last - 1;
			while ((i >= LB) && (A[i] < max))
			{
				A[i + 1] = A[i];
				i--;
			}
			A[i + 1] = max;
		}
		cout << "Your array is sorted Ascending By Insection";
		system("pause");
		return;
	}

	void Shell_Sorting_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Gap = (N / 2);
		while (Gap != 0)
		{
			for (int Last = (LB + Gap); Last <= (N + LB - 1); Last++)
			{
				int Min = A[Last];
				int i = Last - Gap;
				while ((i >= LB) && (A[i] > Min))
				{

					A[i + Gap] = A[i];
					i = (i - Gap);
				}

				A[i + Gap] = Min;
			}
			Gap = (Gap / 2);
			cout << "Your Array Sorted Ascending by Shell" << endl;
			system("pause");
		}
		return;
	}

	void Shell_Sorting_Descending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Gap = (N / 2);
		while (Gap != 0)
		{
			for (int Last = (LB + Gap); Last <= (N + LB - 1); Last++)
			{
				int Max = A[Last];
				int i = Last - Gap;
				while ((i >= LB) && (A[i] < Max))
				{

					A[i + Gap] = A[i];
					i = i - Gap;
				}

				A[i + Gap] = Max;
			}
			Gap = (Gap / 2);
		}
		cout<<"ARRAY IS SORTED BY DESCENDING SHELL SORTING\n";
		system("pause");
	}
	void Merge_Sorting_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Low = LB;
		int High = N + LB - 1;
		Merge_Sort_Sub(Low, High);
		cout << "YOUR ARRAY IS SORTED IN ASCENDING" << endl;
		system("pause");
	}

	void Merge_Sort_Sub(int Low, int High)
	{

		if (Low < High)
		{
			int Mid = (Low + High) / 2;
			Merge_Sort_Sub(Low, Mid);
			Merge_Sort_Sub((Mid + 1), High);
			Merge(Low, Mid, High);
		}
	}

	void Merge(int Low, int Mid, int High)
	{
		int nl = (Mid - Low + 1);
		int nr = High - Mid;
		K = LB;
		int Left[nl];
		int Right[nr];
		for (int i = Low; i <= Mid; i++)
		{
			Left[K] = A[i];
			K++;
		}
		K = LB;
		for (int i = (Mid + 1); i <= High; i++)
		{
			Right[K] = A[i];
			K++;
		}
		int ptra, ptrl, ptrr;
		ptrl = LB;
		ptrr = LB;
		ptra = Low;
		while ((ptrl <= (nl + LB - 1)) && (ptrr <= (nr + LB - 1)))
		{
			if (Left[ptrl] < Right[ptrr])
			{

				A[ptra] = Left[ptrl];
				ptrl = ptrl + 1;
			}
			else
			{

				A[ptra] = Right[ptrr];
				ptrr = ptrr + 1;
			}
			ptra = ptra + 1;
		}

		if (ptrl > (nl + LB - 1))
		{
			for (int i = ptrr; i <= (nr + LB - 1); i++)
			{
				A[ptra] = Right[i];
				ptra++;
			}
		}
		else
		{
			for (int i = ptrl; i <= (nl + LB - 1); i++)
			{
				A[ptra] = Left[i];
				ptra++;
			}
		}
	}

	void QuickSort_Ascending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Low = LB;
		int High = (N + LB - 1);
		QuickSort_sub(Low, High);
		cout<<"ARRAY IS SORTED BY ASCENDING QUICK SORT\n";
		system("pause");
	}
	void QuickSort_sub(int Low, int High)
	{
		if (Low < High)
		{
			int index = Partition(Low, High);
			QuickSort_sub(Low, (index - 1));
			QuickSort_sub((index + 1), High);
		}
	}
	int Partition(int Low, int High)
	{
		int pivot = A[High];
		int i = Low - 1;
		for (int j = Low; j < High; j++)
		{
			if (A[j] <= pivot)
			{
				i++;
				swap(A[i], A[j]);
			}
		}
		swap(A[i + 1], A[High]);
		return (i + 1);
	}
	void Merge_Sorting_Descending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Low = LB;
		int High = N + LB - 1;
		Merge_Sort_Sub_DE(Low, High);
		cout << "YOUR ARRAY IS SORTED IN DECENDING" << endl;
		system("pause");
	}
	void Merge_Sort_Sub_DE(int Low, int High)
	{

		if (Low < High)
		{
			int Mid = (Low + High) / 2;
			Merge_Sort_Sub_DE(Low, Mid);
			Merge_Sort_Sub_DE((Mid + 1), High);
			Merge_DE(Low, Mid, High);
		}
	}
	void Merge_DE(int Low, int Mid, int High)
	{
		int nl = (Mid - Low + 1);
		int nr = High - Mid;
		K = LB;
		int Left[nl];
		int Right[nr];
		for (int i = Low; i <= Mid; i++)
		{
			Left[K] = A[i];
			K++;
		}
		K = LB;
		for (int i = (Mid + 1); i <= High; i++)
		{
			Right[K] = A[i];
			K++;
		}
		int ptra, ptrl, ptrr;
		ptrl = ptrr = LB;
		ptra = Low;
		while ((ptrl <= (nl + LB - 1)) && (ptrr <= (nr + LB - 1)))
		{
			if (Left[ptrl] > Right[ptrr])
			{

				A[ptra] = Left[ptrl];
				ptrl++;
			}
			else
			{

				A[ptra] = Right[ptrr];
				ptrr++;
			}
			ptra++;
		}
		if (ptrl > (nl + LB - 1))
		{
			while (ptrr <= (nr + LB - 1))
			{
				A[ptra] = Right[ptrr];
				ptra++;
				ptrr = ptrr + 1;
			}
		}
		else
		{
			while (ptrl <= (nl + LB - 1))
			{
				A[ptra] = Left[ptrl];
				ptra++;
				ptrl = ptrl + 1;
			}
		}
	}

	void QuickSort_Descending()
	{
		if (N == 0)
		{
			cout << "Array is empty" << endl;
			system("pause");
			return;
		}
		int Low = LB;
		int High = (N + LB - 1);
		QuickSort_sub_DE(Low, High);
		cout<<"ARRAY IS SORTED BY DESCENDING QUICK SORT\n";
		system("pause");
	}
	void QuickSort_sub_DE(int Low, int High)
	{
		if (Low < High)
		{
			int index = Partition_DE(Low, High);
			QuickSort_sub_DE(Low, (index - 1));
			QuickSort_sub_DE((index + 1), High);
		}
	}

	int Partition_DE(int Low, int High)
	{
		int pivot = A[High];
		int i = Low - 1;
		for (int j = Low; j < High; j++)
		{
			if (A[j] >= pivot)
			{
				i++;
				swap(A[i], A[j]);
			}
		}
		swap(A[i + 1], A[High]);
		return (i + 1);
	}
};
