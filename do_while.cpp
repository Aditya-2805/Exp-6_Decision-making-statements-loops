#include<iostream>
using namespace std;
int main() {
    string name;
    do {
        cout << "Enter the string" << endl;
        cin >> name;
    } while (name != "STOP"); 
}
/*
Enter the string
aditya
Enter the string
STOP
*/