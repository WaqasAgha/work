#include<iostream>
#include<fstream>
using namespace std;
void ent1(int*, int&);
void iter1(int*, int);
int main2() {
	const int si = 100;
	int arr[si], co = 0, gi = si, store;
	int user[3], row = 0;
	bool check = true;
	ent1(arr, gi);
	iter1(arr, gi);
	while (co <= (gi - 1)) {
		store = arr[co];
		co++;
		for (int i = 1; i <= store; i++) {
			cout << " " << arr[co];
			co++;
		}
		cout << "" << endl;
	}
	{cout << "these are the number of rows as shown above and thier respective entries" << endl;
	cout << "enter the row you want to select =";
	cin >> user[0];
	cout << "enter the number you want to change in that row =";
	cin >> user[1];
	cout << "enter the number you want to change it with  =";
	cin >> user[2]; }
	co = 0;
	while (co <= (gi - 1)) {
		store = arr[co];
		co++;
		for (int i = 1; i <= store; i++) {
			if (i == 1)
			{
				row=row + 1;
			}
			if (row == user[0]) {
				if (arr[co] == user[1]) {
					arr[co] = user[2];
					check = false;
				}
			}
			else if ((row==user[0]+1)&&(check==true)&&(i==1) ) {
				cout << "the row or the number is incorrect." << endl;
			}
			cout << " " << arr[co];
			co++;
		}
		cout << "" << endl;
	}
	system("pause");
	return 0;
}
void ent1(int a[], int& size) {
	int count = 0;
	ifstream obj1("data.txt");
	if (obj1.is_open()) {
		while (obj1) {
	obj1 >> a[count];
			count++;
		}
	}
	else { cout << "not opened"; }
	size = count - 1;;
	obj1.close();
}
void iter1(int a[], int size) {
	cout << "the elements in the arrat are" << endl;
	for (int i = 0; i < size; i++) {
		cout << " " << a[i];
}
	cout << "" << endl;
}