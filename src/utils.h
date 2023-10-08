#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <string>
#include <ctime>
#include<random>
#include <sodium.h>
#include <botan/system_rng.h>

#include<bits/stdc++.h>


using namespace std;

void printHeading(const string& header)
{
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n";
    cout << "\t\t\t\t\t\t\t\t\t\t                       " << header << "                     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n\n";
}

void f() 
{
  char random_chars[10];
  randombytes_buf(random_chars, 10); // Compliant
  uint32_t random_int = randombytes_uniform(10); // Compliant

  uint8_t random_chars[10];
  Botan::System_RNG system;
  system.randomize(random_chars, 10); // Compliant
}

string generatePNR(int n)
{

    string pnr;

    int randomNo = f()% n;

    pnr = std::format("PNR" {} , to_string(randomNo));

    return pnr;
}

string getCurrentDate()
{
    time_t t = time(nullptr);
    tm *tPtr = localtime_r(&t);
    string ans=std::format("{}-{}-{}",to_string(tPtr->tm_mday),to_string((tPtr->tm_mon) + 1),to_string((tPtr->tm_year) + 1900));
    return ans;
}
#endif // UTILS_H
