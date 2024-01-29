#include <iostream>

using namespace std;

class Address
{

private:
    string _buildingNumer, _street, _city, _country;

public:

    static int counter;

    static void countInstances () {
        cout << "This class has " << counter << " instances" << endl;
    }

    Address(string buildingNumer, string street, string city, string country)
    {
        _buildingNumer = buildingNumer;
        _street = street;
        _city = city;
        _country = country;
        counter++;
    }

    Address(Address & oldObj)
    {
        _buildingNumer = oldObj._buildingNumer;
        _street = oldObj._street;
        _city = oldObj._city;
        _country = oldObj._country;
    }

    void print () {
        cout << "\nYour Address:";
        cout <<"\n===================================================\n";
        cout << "Building Number: " << _buildingNumer << endl;
        cout << "Street: " << _street << endl;
        cout << "City: " << _city << endl;
        cout << "Country: " << _country << endl;
        cout <<"===================================================\n";
    }
};

int Address::counter = 0;

int main()
{
    Address newAddress1("2423P", "Alsulaid", "Riyadh", "KSA");
    newAddress1.print();

    Address newAddress2("5E31", "Obeid Katim", "Khartoum", "Sudan");
    newAddress2.print();
    
    Address newAddress3("OR321", "Maiden", "Cleveland", "USA");
    newAddress3.print();
    
    Address::countInstances();

    return 0;
}


