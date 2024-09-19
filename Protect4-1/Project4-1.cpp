/*
* Author: Chase McCluskey
* Date: 9/19/24
* 
* Description: Create a program that takes char 'F' or 'C' and prints liquid gas or solid 
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	char far = 'F';
	char cel = 'C';
	char input;
	int temp;
	cout << "Please Enter the Temperature in F or C: ";
	cin >> temp;
	cin >> input;
	if (input == 'f' || input == 'c') {
		cout << "Not valid Character, Please enter 'C' or 'F'";
	}
	if (input == far) {
		if (temp < 32) {
			cout << "Water is a solid at that temperature";
		}
		else if (temp == 32) {
			cout << "Water is both a liquid and a solid at that temperature";
		}
		else if (temp > 32 && temp < 212) {
			cout << "Water is a liquid at that temperature";
		}
		else if (temp == 212) {
			cout << "Water is both a liquid and a gas at that temperature";
		}
		else { cout << "Water is a gas at that temperature"; }
	}
	else if (input == cel) {
		if (temp < 0) {
			cout << "Water is a solid at that temperature";
		}
		else if (temp == 0) {
			cout << "Water is both a liquid and a solid at that temperature";
		}
		else if (temp > 0 && temp < 100) {
			cout << "Water is a liquid at that temperature";
		}
		else if (temp == 100) {
			cout << "Water is both a liquid and a gas at that temperature";
		}
		else { cout << "Water is a gas at that temperature"; }

	}

}