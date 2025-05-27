#include<iostream>
using namespace std;
int main() {
	char pets[] = "Ginger, Riyo, Bruno and Ivy";
	for (int i = 0; i < sizeof(pets); i++) {
		cout << 1 << ": " << pets[i] << endl;
		if (pets[i] == 0) {
			break;
		}
	}
	cout << "All characters printed." << endl;
		return 0;
}