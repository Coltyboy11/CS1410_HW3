// File: Chivas_hw3_task2.cpp
// Created by Colten Arave on 9/26/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Serial
{
private:
    int serialNumber;
    static int count;
public:
    Serial(): serialNumber(count)
    {count ++;}
    void showSerial() //Sets/Shows serial number. Same input will show same serial
    {
        Serial x;
        x.serialNumber = serialNumber;
        cout << "Serial Number: " << x.serialNumber << endl;
    }
};
int Serial::count = 1; // Set initial count
// Prototypes
// Main Program Program
int main(void)
{

    Serial alpha, beta, charlie, delta;

    alpha.showSerial();
    beta.showSerial();
    charlie.showSerial();
    alpha.showSerial();
    beta.showSerial();
    delta.showSerial();

    return 0;
}
// Function Definitions
