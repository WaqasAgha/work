#include<iostream>
#include<fstream>
using namespace std;
int* grow(int*st1,int size,int num) {
	int* neya = new int(size + 1);
	for (int i = 0; i < size; i++) {
		neya[i] = st1[i];
	
	}
	neya[size] = num;
	
	delete[] st1;
	return neya;

}
int main() {
	int size = 0,num;
	int* a1 = new int(size);
	int* st;
	st = a1;
	ifstream objp;

		objp.open("user.txt");
		if (objp.is_open()) {
			while (objp) {
				objp>>num;
				st=grow(st,size,num);
				size++;
			}
		
		
		}
		else {
			cout << "file not opened." << endl;
		}

		objp.close();

		for (int i = 0; i < size;i++) {
			cout << st[i] << " " << endl;
		
		}


		delete[] st;





	return 0;
}