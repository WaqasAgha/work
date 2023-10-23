#include<iostream>
#include<fstream>
using namespace std;
void passing(int arr[], int size);

int main()
{
	int user;
	cout << "enter the values you want to store n the array ";
	cin >> user;
	int* p;
	p = new int[user ];
	passing(p, user);
	cout << "the entries stored in the array are" << endl;
	for (int i = 0; i < user; i++) {
	
	
		cout << p[i] << endl;
	}

	delete[] p;

	system("pause");
	return 0;
}
void passing(int arr[], int size)
{


	cout << "Enter the arr value" << endl;
	for (int i = 0; i < size; i++)
	{

		cin >> arr[i];
		
	}

}
