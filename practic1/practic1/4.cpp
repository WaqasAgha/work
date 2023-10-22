//#include<iostream>
//#include<fstream>
//using namespace std;
//void ent3(char*, int);
//int main4() {
//	const int si = 100;
//	char arr[si],pat[5], rpat[5],i2=1;
//	int i = 0;
//	bool pre = true;
//	ent3(arr,si);
//	cout << arr;
//	cout << "enter pat"  ;
//	cin >> pat;
//	cout << "enter rpat";
//	cin >> rpat;
//
//	cout << pat<<endl;
//	cout << rpat;
//	
//	
//	while (arr[i]!='\0') {
//		pre = true;
//		i2 = 1;
//
//		for (int p = 0;p<pat[p]<3; p++) 
//			
//		{
//			if (arr[i]==pat[p]) 
//			{
//				int o = p;
//				while (pat[o + i2] != '\0' && o + i2 < strlen(pat))
//				{
//					
//				
//					if (pat[o + i2] != arr[i + i2])
//					{ 
//						pre = false;
//						break;
//					}
//						i2++;
//				}
//				if (pre==true) {
//					for (int c = i; c < (i + i2);c++) {
//						arr[c] = 0;
//					
//					}
//				
//				}
//			}
//		
//		
//		
//		}
//		cout << "" << arr << endl;
//		if (pre == false) {
//			i = i + i2;
//		}
//		else {
//			i++;
//		}
//	}
//
//
//
//	cout << arr;
//
//
//	
//
//
//
//
//
//
//
//	return 0;
//
//}
//void ent3(char a[], int size) {
//		ifstream obj1("alpha.txt");
//	if (obj1.is_open()) {
//		obj1.getline(a, size);      
//			}
//	else { cout << "not opened"; }
//	obj1.close();
//}