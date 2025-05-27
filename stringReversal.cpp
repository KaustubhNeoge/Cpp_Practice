#include<iostream>
using namespace std;

int main() {
	char boka[] = "Ginger";
	for (int i = sizeof(boka) - 1; i >= 0; i--) {
		cout << boka[i] << flush;
	}

	return 0;
}