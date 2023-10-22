#include<iostream>

using namespace std;
int size(char arr[]) {
	int size=0;
	while (arr[size]!='\0') {
		size++;
	}
	return size-1;
}
int dec(char a[]) {

	int size = 0,st,pow,num=0;
	while (a[size] != '\0') {
		size++;
	}
	st = size - 1;

	for (int i = 0; i < size;i++) {
		if (a[i] == '1') {
			for (int y = 0; y <= st; y++) {
				if (y == 0) { pow = 1; }
				else { pow = pow * 2; }
			}
			num = num + pow;
		}
		st--;
	}

	return num;

}
int bi(int num) {
	int ni,count=0;
	char arr[8];
	cout << "the value in bnery is =";
do {
	if (num % 2 == 1) {
		arr[count] = '1';
		num - 1;
	}
	else { arr[count] = '0'; }
	num = num / 2;
	count++;
	if (num == 1) {
		arr[count] = 1;
	}
	} while (num!=1);	arr[count] = '1';
	cout << arr<<" aaa";
	return 0;
}


int main1 () {
	char arr[100],oper;
    int num;
	cin >> oper;
	switch (oper) {
	case '1':	while (cin) {
			cout << "ENTER A BINERY NUMBER ";
			cin.getline(arr, 100);
			cout << "the number in decimel form is  =" << dec(arr) << endl;
			if (arr[0] == 'a') { break; }
		}
			break;
	case '2': {
		cout << "enter a number to convert to bunery = ";
		cin >> num;
		bi(num);
		break;
	}

	}
	return 0;
}