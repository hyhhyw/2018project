#pragma once
#include<iostream>
#include<string>
using namespace std;

class driversign {
	string namedriver;
	string teldriver;
	string carnumber;

public:
	void NameDriver() {
		cout << "이름" << endl;
		getline(cin, namedriver, '\n');
	}
	void TelDriver() {
		cout << "전화번호" << endl;
		getline(cin, teldriver, '\n');
	}
	void CarNumber() {
		cout << "출발지" << endl;
		getline(cin, carnumber, '\n');
	}
};
