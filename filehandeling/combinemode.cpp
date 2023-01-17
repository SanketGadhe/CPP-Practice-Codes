#include <iostream>
using namespace std;
double power(double n, int p = 1)
{
    double res = 1;
    for (int i = 1; i <= p; i++)
    {
        res = res * n;
    }
    return res;
}
int main()
{
    double num;
    int pow;
    cout << " Enter a number to calculate the power:";
    cin >> num;
    cout << " Enter a power required to calculate the result:";
    cin >> pow;
    cout << endl;
    double r = power(num, pow);
    cout << "The result is:" << r;
     double r = power(num, pow);
    cout << "The result is:" << r;
    cout << endl;
    return 0;
}
