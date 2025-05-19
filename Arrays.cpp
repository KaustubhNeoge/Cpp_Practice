#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements of the array: " << flush;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: " << flush;
		int x;
		cin >> x;
		arr[i] = x;
	}
	cout << "Displaying elements of the array: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}