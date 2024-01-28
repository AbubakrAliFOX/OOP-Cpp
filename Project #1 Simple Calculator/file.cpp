#include <iostream>

using namespace std;

class Calculator
{

private:
    float _CurrentValue, _OperationValue;
    string _CurrentOperation = "NULL";

public:
    void Clear () {
        _CurrentValue = 0;
        _OperationValue = 0;
        _CurrentOperation = "NULL";
    }

    void Add (float Val) {
        _CurrentOperation = "Adding";
        _OperationValue = Val;
        _CurrentValue += Val;
    }

    void Subtract (float Val) {
        _CurrentOperation = "Subtracting";
        _OperationValue = Val;
        _CurrentValue -= Val;
    }

    

    void PrintResult () {
        cout << "\nResult after " << _CurrentOperation << " " << _OperationValue << " is: " << _CurrentValue;
    }

};

int main()
{

    Calculator Calculator1;

    Calculator1.Clear();
    Calculator1.Add(20);
    Calculator1.PrintResult();
    Calculator1.Subtract(50);
    Calculator1.PrintResult();


    return 0;
}