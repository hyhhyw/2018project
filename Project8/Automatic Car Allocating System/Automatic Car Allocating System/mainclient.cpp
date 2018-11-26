#include <iostream>
#include "client.h"
#include "driversign.h"
using namespace std;

int main() {
	client Client;
	Client.NameClient();
	Client.TelClient();
	Client.GoClient();
	Client.FinishClient();

	driversign DriverSign;
	DriverSign.NameDriver();
	DriverSign.TelDriver();
	DriverSign.CarNumber();
}