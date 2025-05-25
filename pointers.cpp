#include<iostream>
using namespace std;
int main() {
	int n = 10;
	int* ptr = &n; // Pointer to n
	cout << "Value of n: " << n << endl; // Output: 10
	cout << "Address of n: " << &n << endl; // Output: Address of n
	cout << "Address of n using pointer: " << ptr << endl; // Output: Address of n
	cout << "Value at address stored in ptr: " << *ptr << endl; // Output: 10
	return 0;
}