#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show
{
public:
	show();
	~show();
	void selectShow(string& showName, string& showDate);
	string selectTime();

protected:
	string showName;
	string showDate;
	string showTime;
};

show::show()
{
	showName = "";
	showDate = "";
	showTime = "";
}


show :: ~show()
{
}


void show::selectShow(string& showName, string& showDate)
{
	char ch;
	char terminator;

	system("CLS");
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SELECT AN UPCOMING SHOW ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. Jurassic World (20/05/2018)" << endl;
	cout << "2. Harry Potter (21/05/2018)" << endl;
	cout << "3. Fast and Furious (22/05/2018)" << endl;

	cin.clear();
	cin.ignore(100, '\n'); 

	cout << "Show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Selct a show: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showName = "Jurassic World", showDate = "20/05/2018";
		break;
	case '2': showName = "Harry Potter", showDate = "21/05/2018";
		break;
	case '3': showName = "Fast and Furious", showDate = "22/05/2018";
		break;
	}

	this->showName = showName;
	this->showDate = showDate;

	cin.get(terminator);

}


// customer selects 12am or 8pm showing
string show::selectTime()
{
	char ch, terminator;

	system("CLS");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~ SELECT TIME ~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "1. 12am" << endl;
	cout << "2. 8pm" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Select a time: ";
	cin.get(ch);

	while (ch != '1' && ch != '2')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Selct a valid time number: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showTime = "12am";
		break;
	case '2': showTime = "8pm";
		break;
	}

	return showTime;
	cin.get(terminator);

}
