#include<iostream>
using namespace std;

void showMenu() {
	cout << "1> Start." << endl;
	cout << "2> Accelerate." << endl;
	cout << "3> Decelerate." << endl;
	cout << "4> Stop." << endl;
}


int selectOperation() {
	cout << "Enter an option: " << flush;
	int opt;
	cin >> opt;
	return opt;
}
	


int main() {
	showMenu();
	int opt = selectOperation();
	switch (opt) {
	case 1:
		cout << "Staring the engine..." << endl;
		break;
	case 2:
		cout << "Accelerating by 1 unit." << endl;
		break;
	case 3:
		cout << "Decelerating by 1 unit." << endl;
		break;
	case 4:
		cout << "Stopping the engine...";
		break;
	default:
		cout << "Enter an appropriate option.";
	}
}