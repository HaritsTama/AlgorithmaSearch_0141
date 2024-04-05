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
	cout << "----------------------\n"
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
}

int main();