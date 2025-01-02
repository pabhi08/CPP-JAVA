///////////   IE -2 ////////////////////////////


#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    
    cout << "Enter the dividend: ";
    cin >> dividend;
    
    cout << "Enter the divisor: ";
    cin >> divisor;

    try 
    {
        if (divisor == 0) {
            throw "Division by zero is not allowed!";
        }

        int result = dividend / divisor;
        cout << "Result: " << result << endl;
    } catch (const char* message) {
        cerr << "Error: " << message << endl;
    }

    return 0;
}




