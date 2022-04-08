// Convert feet to meters
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main () {
	double distance;

	map<string, int> variableMap;

	variableMap["variable"] = 10;

	variableMap["anotherVariable"] = 0;

	variableMap["test"] = 556;

	variableMap["x"] = 42;

    cout << "\nEnter a your name (first name only): " << flush;
	string varName;
	cin >> varName;
	cout << "\nHello " << varName << " Welcome to my conveter!\n" << endl;

	cout << "Please enter how many steps you've taken to getting this far in feet: ";
	cin >> distance;
	cout << "\nHello " << varName << " You have journeyed for about " << distance * 0.3048 << " meters long from where you were before!\n" << endl;
	cout << "----------\n";
	cout << "Thank you for using my converter!\n";
	cout << "----------\n";
    exit;
}
