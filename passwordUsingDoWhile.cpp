#include<iostream>
using namespace std;
int main() {
	const string password = "pass";
	string input;
	do {
		cout << "Enter the password: ";
		cin >> input;
		if (input == password) {
			break;
		}
		else {
			cout << "Incorrect password. Try again." << endl;
		}
	} while (input != password);
	cout << "Password is correct!" << endl;
	return 0;

}