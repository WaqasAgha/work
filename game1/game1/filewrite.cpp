#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int num;
	ofstream file;
	file.open("file.txt",ios::app|ios::binary) ;
	{if (file.is_open()) {
		for (int i = 0; i < 10;i++) {
		
			 file<< "\n" << num;
		}


		file.close();
	}
	else {
	
		cout << "file not opened";
	}
	}
	







	system("pause");
	return 0;

}