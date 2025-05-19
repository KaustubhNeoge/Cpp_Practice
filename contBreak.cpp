#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		cout << "Value of i is: " << i << endl;
		if (i == 3) {
			cout << "Breaking the loop at the value 3" << endl;
			break;
		}
	}
	cout << "Loop ended" << endl;
	cout << "Now using continue statement" << endl;

	cout << "______________________________________________" << endl;
	
	for (int j = 1; j <= 5; j++) {
		if(j == 3){
			cout << "Skipping the value 3" << endl;
			continue;
			cout << "This will not be printed" << endl;
		}
		cout << "Value of j is: " << j << endl;

	}
	cout << "Loop ended." << endl;

}