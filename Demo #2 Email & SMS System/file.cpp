#include <iostream>

using namespace std;

class Person
{

private:
    string _ID;
    string _firstName;
    string _lastName;
    string _phoneNumber;
    string _emailAddress;


public:
    Person(string ID, string firstName, string lastName, string emailAddress, string phoneNumber)
    {
        _ID = ID;
        _firstName = firstName;
        _lastName = lastName;
        _phoneNumber = phoneNumber;
        _emailAddress = emailAddress;
    }

    string ID()
    {
        return _ID;
    }

    string firstName()
    {
        return _firstName;
    }

    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    string lastName()
    {
        return _lastName;
    }

    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    string fullName()
    {
        return _firstName + " " + _lastName;
    }

    string email()
    {
        return _emailAddress;
    }

    void setEmail(string email)
    {
        _emailAddress = email;
    }

    string phoneNumber()
    {
        return _phoneNumber;
    }

    void setPhoneNumber(string phoneNumber)
    {
        _phoneNumber = phoneNumber;
    }

    void printDetails()
    {
        cout << "\nYour Details:";
        cout << "\n===================================================\n";
        cout << "ID: " << ID() << endl;
        cout << "First Name: " << firstName() << endl;
        cout << "Last Name: " << lastName() << endl;
        cout << "Full Name: " << fullName() << endl;
        cout << "Email: " << email() << endl;
        cout << "Phone Number: " << phoneNumber() << endl;
        cout << "===================================================\n";
    }

    void sendEmail (string subject, string body) {
        cout << "\n\nThe following email was sent to: " << email() << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    void sendSMS (string body) {
        cout << "\n\nThe following SMS was sent to: " << phoneNumber() << endl;
        cout << body << endl;
    }
};

int main()
{

    Person Person1("IQ102ASDEW#!@#", "Ahmad", "Khaled", "ahmad@gmail.com", "0507215259");

    Person1.printDetails();
    Person1.sendEmail("Anfragen zum Studium", "Hi, I want to know wether the study in IU is done. \nPlease Respond soon :)");
    Person1.sendSMS("Hi, I want to know wether the study in IU is done. \nPlease Respond soon :)");
    return 0;
}