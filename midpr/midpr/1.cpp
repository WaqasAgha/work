#include<iostream>
#include<fstream>
using namespace std;
void head() {
	ofstream heading;
	heading.open("user.txt" );
	if (heading.is_open()) {
	
		heading << "  "<<"NAME" << "    " << "CLASS" << "    " << "ROLLNO" << "    " << "SECTION" << "  " << endl;
	}
	else {
		cout << "file not opened"<<endl;
	}
	heading.close();

}


bool incheck(char a[]) {
	bool x;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'i' && a[i + 1] == 'n' && a[i + 2] == ' ' && a[i - 1] == ' ') {
			x = true;
			return x;
			
		}
		
	}
	x = false;
	return  x;


}
void inprint1() {

	ofstream heading;
	heading.open("in.txt");
	if (heading.is_open()) {
      heading << "  " << "NAME" << "    " << "CLASS" << "    " << "ROLLNO" << "    " << "SECTION" << "  " << endl;

	}

}
void inprint(char a[]) {

	ofstream heading;
	heading.open("in.txt",ios::app);
	if (heading.is_open()) {
		heading << a<<endl;
	}

}




int main1() {

	char name[100]="", clas[100]="", section[100] = "";
	int ent,roll;
	cout << "how many enteries you want to take = ";
	cin >> ent;
	head();

	
	
		
		ofstream heading;
		heading.open("user.txt",ios::app);
		if (heading.is_open()) {
			for (int i = 1; i <= ent; i++) {

				cout << "NAME / CLLASS / ROLLNO / SECTION =";
				cin >> name >> clas >> roll >> section;
				heading << "  " << name << "    " << clas << "    " << roll << "    " << section << "    " << endl;
			}
		}

		else {

			cout << "fie not open for user entery " << endl;
		}
		heading.close();
		char arr[100];
		int line = 0;
		bool check=false;
		ifstream headin;
		headin.open("user.txt");
		if (headin.is_open()) {
			while (headin) {
				line = line + 1;
				headin.getline(arr, 100);
				if (line == 1) { continue; }



				check = incheck(arr);
				if (check == true) {
					inprint1();
					inprint(arr);
				
				
				}
				
				line++;
			}

		
		}




	
	
	





	return 0;
}