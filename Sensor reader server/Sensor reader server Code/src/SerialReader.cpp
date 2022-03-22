#include "../inc/SerialReader.h"

SerialReader::SerialReader(string PortID)
{
    if(PortID == "")
    {
        throw invalid_argument("PortID");
    }

    this->portID = PortID;
    startValueRecieved = false;

    while (openPort(portID) == false)
    {
        cout << "Failed to open port, trying again" << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
}

SerialReader::~SerialReader()
{

}

void SerialReader::ReadSerialPort()
{
    cout << "Test read" << endl;   
}

bool SerialReader::openPort(string portID)
{
    bool retVal = false;

    // char[] tempPortID = string_to_char   <- figure this out somehow 

    int serialPort = open(portID, O_RDWR);

    if(serialPort < 0)
    {
        cout << "Error " << errno << " from open: " << strerror(errno) << endl;
    }
    else
    {
        retVal = true;
    }
    

    return retVal;
}