#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <string>
#include <ctime>
#include<random>
#include<bits/stdc++.h>


using namespace std;

void printHeading(const string& header)
{
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n";
    cout << "\t\t\t\t\t\t\t\t\t\t                       " << header << "                     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n\n";
}

string generatePNR(int n)
{
    mt19937_64 rng(time(nullptr));

    uniform_int_distribution<int> distribution(0, n - 1);

    int randomNo = distribution(rng);

    string pnr = "PNR" + to_string(randomNo);

    return pnr;
}

string getCurrentDate()
{
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);

    return to_string(tPtr->tm_mday) + "-" + to_string((tPtr->tm_mon) + 1) + "-" + to_string((tPtr->tm_year) + 1900);
}
#endif // UTILS_H
