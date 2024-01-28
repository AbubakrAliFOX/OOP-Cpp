#include <iostream>

using namespace std;

class Student
{

private:
    string _FirstName;
    string _LastName;

public:
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    string getFirstName () {
        return _FirstName;
    }

    // __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    string getLastName () {
        return _LastName;
    }

    // __declspec(property(get = getLastName, put = setLastName)) string LastName;

    string FullName () {
        return _FirstName + " " + _LastName;
    }

};

int main()
{

    Student Student1;

    Student1.setFirstName("Abubkar");
    Student1.setLastName("Ali");

    cout << "First Name: " << Student1.getFirstName() << endl;
    cout << "Last Name: " << Student1.getLastName() << endl;
    cout << "FUll Name: " << Student1.FullName() << endl;

    // Student1.FirstName = "Abubakr";
    // Student1.LastName = "Eldaw";
    // cout << Student1.FullName() << endl;

    return 0;
}