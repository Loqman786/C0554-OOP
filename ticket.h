Total cost#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

class ticket
{
public:
	ticket();
	~ticket();
	void setPrice(double price);
	void printTicket(double price, string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);
	

protected:
	double totalCost;
};



ticket::ticket()
{
	totalCost = 0;
}


ticket :: ~ticket()
{
}

void ticket::printTicket(double price, string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address)
{
	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~ YOUR TICKETS ENJOY THE MOVIE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "==========================================================================" << endl;
	cout << "================= The Bucks Cinema ===============" << endl;
	cout << "============================= Enjoy the Movie ! =========================" << endl;

	cout << "Show: " << showName << endl;
	cout << "Date: " << showDate << endl;
	cout << "Time: " << showTime << endl;
	cout << "==========================================================================" << endl;
	cout << "Number of seats: " << numSeats << endl;
	cout << "Total cost: " << price << endl;
	cout << "Ticket Purchaser: " << fName << " " << sName << endl;
	cout << "Postal address: " << address << endl;

	cout << "===========================================================================" << endl;
	cout << "==========================================================================\n\n" << endl;
}