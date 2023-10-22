#include<iostream>
using namespace std;
int main0() {

	char arr[3][3] = { '7','8', '9' ,'4', '5','6','1','2','3' },col,col1,loc;
	char pl1, pl2;
	bool con = true;



	
	cout << "Choose your symbol to put on the board.\n if an alphabet then it must be capital.\n p;ayer 1 = ";
		cin >> pl1;
		cout << " player 2 = ";
		cin >> pl2;
		col1 = 0;

		while (con==true) {
			cout << "the numbers represent the locations on the board " << endl;
		
			if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) 
				|| (arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0]) 
				|| (arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]) 
				|| (arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1])
				|| (arr[0][2] == arr[1][2] && arr[0][1] == arr[2][2])
				|| (arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2])
				|| (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
				|| (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
				
				){
				con = false;
				
				if (col1-1 % 2 == 1) {
					cout << "player 1 won the game ";
				}
				else {
					cout << "player 2 won the gaem";
				}
				system("pause");
			}
			col1++;
			
			for (int row = 0; row < 3; row++) {
				for (int i = 0; i < 2; i++) {
					col = 0;
					if (i == 0) {
						for (int val = 1; val <= 6; val++) {
							if (val % 2 == 1) {
								cout << arr[row][col];
								col++;
							}
							else if (val != 6) {
								cout << " | ";
							}

						}

					}
					else if (row != 2) {
						for (int val = 1; val <= 5; val++) {
							cout << "--";
						}

					}
					cout << endl;



				}


			}//displayng
			
			if (col1%2==1) {
				cout << "player 1 turn = ";
				cin >> loc;

				switch (loc) {
				case '7':
					arr[0][0] = pl1;
					break;
				case '8':
					arr[0][1] = pl1;
					break;
				case '9':
					arr[0][2] = pl1;
					break;
				case '4':
					arr[1][0] = pl1;
					break;
				case '5':
					arr[1][1] = pl1;
					break;
				case '6':
					arr[1][2] = pl1;
					break;
				case '1':
					arr[2][0] = pl1;
					break;
				case '2':
					arr[2][1] = pl1;
					break;
				case '3':
					arr[2][2] = pl1;
					break;


				}
			}
			else {

				cout << "player 2 turn = ";
				cin >> loc;
				switch (loc) {
				case '7':
				arr[0][0] = pl2; 
				break;
				case '8':
					arr[0][1] = pl2;
					break;
				case '9':
					arr[0][2] = pl2;
					break;
				case '4':
					arr[1][0] = pl2;
					break;
				case '5':
					arr[1][1] = pl2;
					break;
				case '6':
					arr[1][2] = pl2;
					break;
				case '1':
					arr[2][0] = pl2;
					break;
				case '2':
					arr[2][1] = pl2;
					break;
				case '3':
					arr[2][2] = pl2;
					break;


				}
			
			}

		
			
			
			system("cls");
		
		}






	

	return 0;
}