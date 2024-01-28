#include <iostream>

using namespace std;

class Calculator
{

private:
    float _CurrentValue, _OldValue, _OperationValue;
    string _CurrentOperation = "NULL";

    bool IsZero(float Number)
    {
        return Number == 0;
    }

public:
    void Clear()
    {
        _CurrentValue = 0;
        _OperationValue = 0;
        _CurrentOperation = "NULL";
    }

    void Add(float Val)
    {
        _CurrentOperation = "Adding";
        _OldValue = _CurrentValue;
        _OperationValue = Val;
        _CurrentValue += Val;
    }

    void Subtract(float Val)
    {
        _CurrentOperation = "Subtracting";
        _OldValue = _CurrentValue;
        _OperationValue = Val;
        _CurrentValue -= Val;
    }

    void Divide(float Val)
    {
        _OldValue = _CurrentValue;
        if (IsZero(Val))
        {
            Val = 1;
        }
        _CurrentOperation = "Dividing";
        _OperationValue = Val;
        _CurrentValue /= Val;
    }

    void Multiply(float Val)
    {
        _CurrentOperation = "Multiplying";
        _OldValue = _CurrentValue;
        _OperationValue = Val;
        _CurrentValue *= Val;
    }

    void CancelLastOperation()
    {
        _CurrentValue = _OldValue;
    }

    void PrintResult()
    {
        cout << "\nResult after " << _CurrentOperation << " " << _OperationValue << " is: " << _CurrentValue;
    }
};

int main()
{

    Calculator Calculator1;

    Calculator1.Clear();
    Calculator1.Add(100);
    Calculator1.PrintResult();
    Calculator1.Subtract(50);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();

    return 0;
}