#include<iostream>
#include<fstream>
using namespace std;
void ent(int *, int&);
void iter(int*, int);
int main1() {
	const int si = 100;
	int arr[si], co = 0, gi=si,store;
	ent(arr, gi);
	iter(arr, gi);
	while (co<=(gi-1)) {
		store = arr[co];
	
		co++;
		for (int i = 1 ; i <=store; i++) {
		
			cout << " " << arr[co];
			co++;
		}
		
		
		cout << "" << endl;
	}
	
	
	system("pause");
	return 0;
}
void ent(int a[],int &size) {
	int count = 0;
	ifstream obj("data.txt");
	if (obj.is_open()) {
		while (obj) {
		
			obj >> a[count];
			count++;
			
		}
	}
	
	else { cout << "not opened"; }

	
	size = count - 1;;
	obj.close();


}
void iter(int a[], int size) {
	cout << "the elements in the arrat are" << endl;
	for (int i = 0; i < size;i++) {
	
		cout << " " << a[i];
	
	}
	cout << "" << endl;
}