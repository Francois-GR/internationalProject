#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "../inc/SerialReader.h"

SerialReader* SR;

int main( void )
{
    string tempID;

    cout << "Please enter port ID: ";
    cin >> tempID;

    if(tempID == "1")
    {
        tempID = "/dev/ttyUSB0";
    }

    SR = new SerialReader(tempID);

    bool quit = false;
    
    while (!quit)
    {

    }

    return 0;
}