#ifndef BUS_H
#define BUS_H

#include <iostream>

using namespace std;

// CLASS BUS
class Bus
{
private:
    int maxSeats=32;
    int bookedSeats=0;
    double busFare=0.0;
    string busNo;
    string source; 
    string destination;
    string sourceTime;
    string destinationTime;

public:
    Bus()
    {
        strcpy(busNo, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(sourceTime, "");
        strcpy(destinationTime, "");
    }

    // METHODS
    void addBus();
    void showAllBus();
    void showBusDetails();
    void viewBusDetails();
    void deleteBus();
    void editBus();

    // GETTERS
    string getBusNo()
    {
        return busNo;
    }

    string getSource()
    {

        return source;
    }

    string getDestination()
    {
        return destination;
    }

    string getSourceTime()
    {
        return sourceTime;
    }

    string getDestinationTime()
    {
        return destinationTime;
    }

    int getBookedSeats()
    {
        return bookedSeats;
    }

    int getMaxSeats()
    {
        return maxSeats;
    }

    double getBusFare()
    {
        return busFare;
    }

    // SETTERS
    void setBookedSeats()
    {
        bookedSeats++;
    }

    void setCancelTicket()
    {
        bookedSeats--;
    }

    void setSource(string s)
    {
        if (s && s[0])
            strcpy(source, s);
    }

    void setDestination(string d)
    {
        if (d && d[0])
            strcpy(destination, d);
    }

    void setSourceTime(string s)
    {
        if (s && s[0])
            strcpy(sourceTime, s);
    }

    void setDestinationTime(string d)
    {
        if (d && d[0])
            strcpy(destinationTime, d);
    }

    void setBusFare(double f)
    {
        if (f)
            busFare = f;
    }
};
#endif // !BUS_H
