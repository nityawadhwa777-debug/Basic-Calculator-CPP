#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;
    cout << "BASIC CALCULATOR" << endl;

    cout << "enter first number" << endl;
    cin >> num1;

    cout << "enter second number" << endl;
    cin >> num2;
    
    cout<<"enter operator"<<endl;
    cin>>op;
    
    switch (op)
    {
    case '+':
        cout << "result is " << num1 + num2;
        break;

    case '-':
        cout << "result is " << num1 - num2;
        break;

    case '*':
        cout << "result is " << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
        {
            cout << "result is " << num1 / num2;
        }
        else
        {
            cout << "error";
        }
        break;

    default:
        cout << "invalid operator";
    }
    return 0;
}
