#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream obj;
	obj.open("file1.txt",ios::trunc);
	if (obj.is_open()) {
	
		obj << "my name is waqas ali khan"<<endl;
		obj << "my agge is 20";
	
	
	
	
	}
	else { cout << "file not opened for writing..."; }
	obj.close();
	ifstream obj1;
	obj1.open("file1.txt");
		if (obj1.is_open()) {
			char arr[40],cher;
			int i = 0;
			while (obj1) {
				obj1.get(cher);
				arr[i] = cher;
				i++;
			}
           
			arr[i] = '\0';
		
			cout << arr;
		
		
		}
		else { cout << "nit opened for viewing .."; }
	
	
	
	
	







		system("pause");
	return 0;
}