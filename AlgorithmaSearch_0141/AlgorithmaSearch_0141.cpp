#include <iostream>
using namespace std;

int arr[20]; //Array yang akan dicari
int n; //Banyak Element pada Array
int i; //Index dari element array

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	//Menerima elements array
	cout << "\n----------------------\n";
	cout << " Enter Array Elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; // Jumlah Perbandingan
	int item;

	do
	{
		// Menerima nomor untuk dicari
		cout << "\nEnter the element you want to search "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; //step 2
		while (i < n) //step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl; //step 6
				break;
			}
			i++; //step 4
		}

		if (i == n) //step 5
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons : " << ctr << endl;

		cout << "\nContinue search (y/n) : ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
	cout << "Array element are : ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	LinearSearch();
	display();
}