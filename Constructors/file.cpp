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

    void print () {
        cout << "Your Address:" << endl;
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

    return 0;
}