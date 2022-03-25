#ifndef SERIALREADER_H
#define SERIALREADER_H

//std cpp headers
#include <string.h>
#include <queue>
#include <mutex>
#include <thread>
#include <exception>
#include <iostream>
#include <stdio.h>
using namespace std;

// Linux headers
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h> 
#include <unistd.h> 

class SerialReader
{
private:
    string portID;
    int serialPort;
    struct termios tty;
    queue<string> completeMessageQueue;
    string currentMessage;
    bool startValueRecieved;
    mutex messageMutex;

    bool openPort(string portID);
    bool configureTty();
public:
    SerialReader(string PortID);
    ~SerialReader();

    void ReadSerialPort();
};

#endif