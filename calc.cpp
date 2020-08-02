/*
Simple C++ console calculator application capable of MDAS Operations, Error prevention/Input Validation and clear screen operations for Windows
Created by Theron Adrianne A. Bueno (2020)
Follow me on GitHub for more Projects
https://github.com/proDev-Theron/
*/
#include <iostream>
using namespace std;
int main(){
    system("cls");
    cout << "||==============================||\n||   Theron Adrianne A. Bueno   ||\n||          Calculator          ||\n|| www.github.com/proDev-Theron ||\n||Say hi prodev.theron@gmail.com||\n||==============================||" << endl << endl;
    double var1, var2;
    system("pause");
    system("cls");

    cout << "Enter two real numbers to evaluate\n";

    cout << "Enter the first number: ";
    cin >> var1;

    cout << "Enter the second number: ";
    cin >> var2;
    
    cout << "Input [+] to add, [-] to subtract, [*] to multiply, [/] to divide" << endl;
    char operation;
    cin >> operation;
    system("cls");

    switch (operation)
    {
    case '+':
        cout << var1 << " + " << var2 << " = " << var1+var2;
        break;
    case '-':
        cout << var1 << " - " << var2 << " = " << var1-var2;
        break;
    case '*':
        cout << var1 << " * " << var2 << " = " << var1*var2;
        break;
    case '/':
        if (var2 != 0)
        cout << var1 << " / " << var2 << " = " << var1/var2;
        else cout << "You cannot divide by 0";
        break;
    
    default:
        cout << "Invalid Input, try again.";
        break;
    }
    return 0;
}
