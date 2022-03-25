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
        this_thread::sleep_for(chrono::seconds(10));
    }


    cout << "Port succesfully opened   |   PortID: " << portID << endl;
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
    char portIDCString[20];     //standard port id's for linux should never excede 20 chars

    //converting portid string to char array
    for (int i = 0; i < (int)portID.size(); i++)
    {
        portIDCString[i] = portID[i];
        portIDCString[i+1] = '\0';
    }

    serialPort = open(portIDCString, O_RDWR);

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

bool SerialReader::configureTty()
{
    bool retVal = false;

    if(tcgetattr(serialPort, &tty) != 0) 
    {
        printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
    }
    
    cfsetspeed(&tty, B115200);

    if (tcsetattr(serialPort, TCSANOW, &tty) != 0) 
    {
        printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
    }
    else
    {
        retVal = true;
    }
    

    return retVal;
}