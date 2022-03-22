#ifndef SENSORDATA_H
#define SENSORDATA_H

#include <string>
using namespace std;

typedef struct
{
    string SensorID;
    uint16_t TimeStamp;
    float Temperature;
    float Humidity;
    float LightIntensity;
    float NH3PPM;
    float NO2PPM;
    float COPPM;
    float CO2PPM;
    float AtmosphericPressure;
}SensorData;

#endif