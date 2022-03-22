#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "../inc/SerialReader.h"

SerialReader* SR;

static void showMenu( void )
{
    cout << ("\n\nCar Rental menu\n");
    cout << ("===============\n");
    cout << ("(1) Show all cars\n");
    cout << ("(2) Select car\n");
    cout << ("(3) Rent selected car\n");
    cout << ("(4) Return selected car\n");
    cout << ("(5) Check if car needs cleaning\n");
    cout << ("(6) Clean car\n");
    cout << ("-----------------------\n");
    cout << ("(9) QUIT\n\n");
    cout << ("Choice : ");
}

int main( void )
{
    SR = new SerialReader("NULL");
    bool quit = false;
    
    while (!quit)
    {
        char choice = '\0';
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1' :
            SR->ReadSerialPort();
            cout << "Test 1\n" << endl;
            break;
        case '2' :
            cout << "Test 2\n" << endl;
            break;
        case '3' :
            cout << "Test 3\n" << endl;
            break;
        case '4' :
            cout << "Test 4\n" << endl;
            break;
        case '5' :
            cout << "Test 5\n" << endl;
            break;
        case '6' :
            cout << "Test 6\n" << endl;
            break;

        case '9' :
            quit = true;
            break;
        default:
            cout << "\n\nI did not understand your choice (" << choice << ")" << endl;
            break;
        }
    }

    return 0;
}