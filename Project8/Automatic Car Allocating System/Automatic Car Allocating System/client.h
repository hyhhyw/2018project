#pragma once
#include<iostream>
#include<string>
using namespace std;

class client {
	string nameclient;
	string telclient;
	string goclient;
	string finishclient;

public:
	void NameClient() {
		cout << "�̸�" << endl;
		getline(cin, nameclient, '\n');
	}
	void TelClient() {
		cout << "��ȭ��ȣ" << endl;
		getline(cin, telclient, '\n');
	}
	void GoClient() {
		cout << "�����" << endl;
		getline(cin, goclient, '\n');
	}
	void FinishClient() {
		cout << "������" << endl;
		getline(cin, finishclient, '\n');
	}
};