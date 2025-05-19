#include<iostream>

using namespace std;

int main() {
	const string pwd = "hello";
	string input;

	do {
		cout << "Enter the password: " << flush;
		cin >> input;
		if (input != pwd) {
			cout << "You entered the wrong password." << endl;
		}
	} while (input != pwd);

	cout << "Password is correct." << endl;


}