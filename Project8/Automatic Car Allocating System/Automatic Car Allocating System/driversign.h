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
		cout << "�̸�" << endl;
		getline(cin, namedriver, '\n');
	}
	void TelDriver() {
		cout << "��ȭ��ȣ" << endl;
		getline(cin, teldriver, '\n');
	}
	void CarNumber() {
		cout << "�����" << endl;
		getline(cin, carnumber, '\n');
	}
};
