//check whether the given number is armstrong or not

#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cout << "Enter the number :" << endl;
    cin >> n;

    temp = n;
    int p = 0;
    while (n > 0)
    {
        int rem = n % 10;
        p = p + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == p)
    {
        cout << "It is a Armstrong number" << endl;
    }
    else

    {
        cout << "It is a not Armstrong number" << endl;
    }
}