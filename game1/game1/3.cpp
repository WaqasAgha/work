#include<iostream>
using namespace std;
int main2() {
	int b[4] = { 11,1,2,3 },h=5;
	int* g = &h;
	int* p = b;

	cout << (p)<<endl;
	*p = *(p + 2);
	cout << p+2 << endl;
	cout << p << endl;
	





	return 0;

}