#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

class customer
{
public:
	customer();
	~customer();
	void getLogin();
	void getProfileInfo(string& fName, string& sName, string& address);
	void getPaymentInfo();

protected:
	string fName;
	string sName;
	string address;
};
customer::customer()
{
	fName = "";
	sName = "";
	address = ""; 
}

customer :: ~customer()
{
}

void customer::getLogin()
{
	string username;
	string password;

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ LOG IN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "\n Welcome to the Bucks Cinema!" << endl;
	cout << "                                                          please log in." << endl;

	cout << "Enter username: ";
	getline(cin, username);

	while (username.length() > 10)
	{
		cout << "Your username has be no more than 10 characters." << endl;
		cout << "Please re-enter your username (has to be no longer than 10 characters): ";
		getline(cin, username);
	}

	cout << "Enter password: ";
	getline(cin, password);

	while (password.length() > 10)
	{
		cout << "Your password should be no more than 10 characters long." << endl;
		cout << "Please re-enter your password (has to be no longer than 10 characters): ";
		getline(cin, password);
	}
}
void customer::getProfileInfo(string& fName, string& sName, string& address)
{
	system("CLS");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ PROFILE INFORMATION ~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "Enter your First Name: ";
	getline(cin, fName);

	this->fName = fName;

	cout << "Enter your Surname: ";
	getline(cin, sName);

	this->sName = sName;

	cout << "Enter your Address: ";
	getline(cin, address);

	this->address = address;

}
