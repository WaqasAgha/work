#include<iostream>
using namespace std;
int main1() {

	int la,sec, arr[5] = { 23,2,55,3,5 };
	if (arr[0] > arr[1]) {
		la = arr[0];
		sec = arr[1];

	
	}
	else {
		la = arr[1];
		sec = arr[0];
	
	}

	for (int i = 2; i <= 5; i++) {
		if (i < 5&&arr[i]>la) {
			sec = la;
			la = arr[i];
			
		
		}

		if (arr[i-1]>sec&&arr[i-1]!=la) {
		
			sec = arr[i - 1];
		
		}

	
	}

	cout << la << " " << sec;













	return 0;
}