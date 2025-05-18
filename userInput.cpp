#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    string name;
    int age;
    
    cout << "Enter your name: " << flush;
    getline(cin, name); // Use getline to read full name

    cout << "Enter your age: " << flush;
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    return 0;

}