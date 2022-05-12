CREATE DATABASE Air_Quality

CREATE TABLE Sensor_Data
(EntryID INT,
SensorSensorID INT IDENTITY (100,1) PRIMARY KEY,
"TimeStamp" TIMESTAMP,
Temperature FLOAT (10),
Humdity FLOAT (10),
LightIntensity FLOAT (10),
NH3PPM FLOAT (10),
NO2PPM FLOAT (10),
COPPM FLOAT (10),
CO2PPM FLOAT (10),
AtmosphericPressure FLOAT (10)
)