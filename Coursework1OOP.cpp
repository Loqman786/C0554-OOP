#include <iostream>
#include <string>
#include "showSeat.h"
#include "show.h"
#include "customer.h"
#include "ticket.h"
using namespace std;

int main()
{

    string a, b, c, f, g, h;
    int d;

    double e;

    char ch, terminator;

    showSeat SEAT;
    show SHOW;
    customer CUST;
    ticket TICK;

    CUST.getLogin();
    CUST.getProfileInfo(f, g, h);

    // Displays Main Menu

    system("CLS");

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
    cout << "1. Buy tickets for upcoming shows" << endl;
    cout << "2. Log out\n" << endl;
    cout << "Please enter a menu choice number: ";
    cin.get(ch);

    while (ch != '1' && ch != '2')
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid menu choice number: ";
        cin.get(ch);
    }

    if (ch == '2')
    {
        return EXIT_SUCCESS;
    }

    do
    {
        SHOW.selectShow(a, b);
        c = SHOW.selectTime();

        do
        {
            cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
            cin.get(ch);
        } while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
        cin.get(terminator);
    } while (ch == 'N' || ch == 'n');

    SEAT.initaliseFloorPlan();
    d = SEAT.getNumSeats();
    e = SEAT.getSeatSelection();

    TICK.printTicket(e, a, b, c, d, f, g, h);

    return EXIT_SUCCESS;
}


