#include<iostream>
double arearectangle(double b, double c) {
	double area;
	area = b * c;
	return (area);

}
using namespace std;
int  main0()
{
	int a;
	double b, c;
	do
	{
		cout << "Select an option :" << endl;
		cout << "1. Calculate the area of a rectangle" << endl;
		cout << "2. Calculate the area of a circle" << endl;
		cout << "3. Calculate the area of a triangle" << endl;
		cout << "4.     Quit" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "enter the length and the width of the rectanfle";
		cin >> b >> c;
		cout << "the area of the rectangle is = " << arearectangle(b, c) << endl;

		}
		}
		} while (a == 1 || a == 2 || a == 3);



		system("pause");
		return 0;
	}