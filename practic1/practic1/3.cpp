#include<iostream>
#include<fstream>
using namespace std;
void ent2(char*, int&);
int main3() {
	const int si = 100;
	int i = 0,lim=0,len=1,wst=0;
	bool prime = true;
	char arr[si];
	ent2(arr,lim);
	cout << arr  << endl;
		while (arr[i]!='\0'&&(i<lim)) {
			prime = true;
			
			wst = i;
			
			while (arr[i] != ' '&&(i<lim)) {
				len++;
             	i++;
			}
				len = len - 1;
				
				for (int p = 2; p <=len / 2; p++) {
					if (len % p == 0) { prime = false;
					break;
					}
				}
				if (prime == true) {
					for (int o = wst; o <=i;o++) {
					
						if (arr[o] != '\0')
						{
							arr[o] = '0';
						}
					}
					
				}
				i++;
		len = 1;
	}
		i = 0;
		while (arr[i] !='\0') {
			len = i;
			while (arr[i]=='0') {
				while (i < lim) {
				arr[i] = arr[i + 1];
					i++;	}
				i = len;
	}
			i = len;
			i++;
		
		}
		cout <<"edited one =" << arr;
	return 0;
}
void ent2(char a[], int& size) {
	int i = 0;
	char ch;
	ifstream obj1("alpha.txt");
	if (obj1.is_open()) {
		while (obj1.get(ch)) {
			
		 a[i]=ch;
			i++;		
}a[i-1] = '\0';
	}else { cout << "not opened"; }
obj1.close();
size = i-1;
}
