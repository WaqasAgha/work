#include<iostream>

float arear(float, float);
float areat(float, float);
float areac(float);
using namespace std;
int main() {
	int opt;
	float area, len, wi;
do {
		cout << "Select aaan option:\n1. Calculate the area of a rectangle\n2. Calculate the area of a circle\n3. Calculate the area of a triangle\n4. Quit\nEnter your choice = " ;
		cin >> opt;
		switch (opt) {
		case 1: { 
			cout << "Enter the length and the width of the rectangle =";
			cin >> len >> wi;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (len >= 0 && wi >= 0) {
				cout << "AREA OF THE RECTANGLE = " << arear(len, wi) << endl;
			}
			else {
				cout << "the value cant be negative or an alphabet" << endl;
			}
			break; }
		case 2: {
			cout << "Enter the radius of the circle = ";
			cin >> len;
			
			if (len >= 0) {
				
				cout << "AREA OF THE circle = " << areac(len) << endl;;
				
			}
			else {
				cout << "the value cant be negative ";
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
				break;
		}
		case 3: {
			cout << "Enter the base and the hight of the triangle =";
			cin >> len >> wi;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (len >= 0 && wi >= 0) {
				
				cout << "AREA OF THE TRIANGLE = " << areat(len, wi) << endl;;
			}
			else {
				cout << "the value cant be negative " << endl;
			}
		
			break; }
		case 4: {
			cout << "ENDING PROGRAM .....";
			break; }
		default:
			cout << "INVALID ENTERY" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}

	} while (opt != 4);
	
	return 0;
}

float arear(float x, float y) {
	return (x * y);
}
float areac(float x) {
	return ((3.14)*(x*x));
}
float areat(float x, float y) {
	return (0.5*x*y);
}
