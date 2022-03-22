CXX=g++
CXXFLAGS=-Wall -Werror -Wextra -pedantic -ggdb -O0 -std=c++11 -Iproduct
SOURCES=$(wildcard src/*.cpp)
HEADERS=$(wildcard inc/*.h)
TARGET=Sensor_Reader_Server

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	@$(CXX) $(CXXFLAGS) -o $@ $(SOURCES)

clean:
	@rm -f $(TARGET)
