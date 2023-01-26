#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat
{
public:
	showSeat();
	~showSeat();
	double getSeatSelection();
	void initaliseFloorPlan();
	int getNumSeats();
	

private:
	void displayFloorPlan(int r, int c);
	void calculatePrice(double& price); 

protected:
	char floorPlan[7][6];
	int numSeats;
	int rNum; 
	double price;
};


showSeat::showSeat()
{
	for (int r = 0; r < 7; r++)
		for (int c = 0; c < 6; c++)
			floorPlan[r][c] = '0'; 

	numSeats = 0;
	rNum = 0;
	price = 0; 
}


showSeat:: ~showSeat()
{
}

void showSeat::initaliseFloorPlan()
{
	for (int r = 0; r < 7; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			floorPlan[r][c] = 'S';
			cout << setw(5) << floorPlan[r][c];
		}
		cout << endl;
	}
}


int showSeat::getNumSeats()
{
	//system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~ SELECT AVALAIBLE SEATS ~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	do
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "How many tickets are you looking into purchasing (max. 8)?: "; 
		cin >> numSeats;
		cout << endl;
	} while (numSeats != 1 && numSeats != 2 && numSeats != 3 && numSeats != 4 && numSeats != 5 && numSeats != 6 && numSeats != 7 && numSeats != 8);
	return numSeats;
}

double showSeat::getSeatSelection()
{
	int row, column;
	int counter = 0;

	system("CLS");
	cout << "~~~~~~~~~~~~~~ SELECT ROW AND COLUMN ~~~~~~~~~~~~~\n" << endl;
	cout << " A = Avaliable seat\n" << endl;
	cout << " H = Hold seat\n" << endl;

	while (counter < numSeats)
	{
		cout << "Please enter the row number (0-6) for seat: ";
		cin >> row;

		while (row != 0 && row != 1 && row != 2 && row != 3 && row != 4 && row != 5 && row != 6)
		{
			cout << "Please re-enter the row number (minimum 0-6 max) for seat: ";
			cin >> row;
		}

		cout << "Please enter the column number (minimum 0-5 max) for seat: ";
		cin >> column;

		while (column != 0 && column != 1 && column != 2 && column != 3 && column != 4 && column != 5)
		{
			cout << "Please re-enter the column number (minimum 0-5 max) for seat: ";
			cin >> column;
		}

		displayFloorPlan(row, column);
		counter++;
		calculatePrice(price);
	}



	cout << " Your total ticket price is " << price << "!";

	return price;
}

void showSeat::calculatePrice(double& price)
{
	price += 18;
	this->price = price;
}

void showSeat::displayFloorPlan(int r, int c)
{
	for (int a = 0; a < 7; a++)
	{
		for (int b = 0; b < 6; b++)
		{
			if (r == a && c == b)
			{
				floorPlan[a][b] = 'H';
				cout << setw(5) << floorPlan[a][b];

			}
			else
			{
				floorPlan[a][b] = 'A';
				cout << setw(5) << floorPlan[a][b];
			}
		}
		cout << endl;
	}

}