#include <iostream>

using namespace std;

class Address
{

private:
    string _buildingNumer, _street, _city, _country;

public:
    Address(string buildingNumer, string street, string city, string country)
    {
        _buildingNumer = buildingNumer;
        _street = street;
        _city = city;
        _country = country;
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

int main()
{
    Address newAddress("2423P", "Alsulaid", "Riyadh", "KSA");
    newAddress.print();

    Address newAddress2(newAddress);
    newAddress.print();

    return 0;
}