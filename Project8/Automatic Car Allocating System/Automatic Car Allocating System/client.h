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
		cout << "이름" << endl;
		getline(cin, nameclient, '\n');
	}
	void TelClient() {
		cout << "전화번호" << endl;
		getline(cin, telclient, '\n');
	}
	void GoClient() {
		cout << "출발지" << endl;
		getline(cin, goclient, '\n');
	}
	void FinishClient() {
		cout << "목적지" << endl;
		getline(cin, finishclient, '\n');
	}
};