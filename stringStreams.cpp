#include<iostream>
#include<sstream>
using namespace std;

int main() {
	string name = "Alpha Coder";
	int age = 25;
	stringstream ss;
	ss << "Name: " << name << endl << "Age: " << age;
	cout << ss.str() << endl;


}