#ifndef TICKET_H
#define TICKET_H

#include <iostream>

#include "bus.h"

// CLASS TICKET
class Ticket
{
private:
    string name;
    string pnrNo;
    string date;
    Bus bus;

public:
    void generateTicket(char *, Bus);
    void displayTicket();
    void bookTicket();
    void cancelTicket();
    void editTicket();
    void showTicketsByPNR();
    void showTicketsByName();
    void showTicketsByBus();
    void showTicketsBySource();
    void showTicketsByDestination();
    void showAllTickets();

    // GETTERS
    string getName()
    {
        return name;
    }

    string getPnrNo()
    {
        return pnrNo;
    }

    string getDate()
    {
        return date;
    }

    // SETTERS
    void setName(string n)
    {
        if (n && n[0])
            strcpy(name, n);
    }
};
#endif // !TICKET_H
