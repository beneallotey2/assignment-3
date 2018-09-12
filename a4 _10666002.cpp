#include <iostream>

using namespace std;

int gcd(int u,int v)
{
    return ( v != 0)? gcd ( v,u%v): u;

}

int main ()
{
    int u,v,result;
    cout << "enter first number:";
    cin >> u;
    cout << "enter second number:";
    cin >> v;
    cout << "enter  two numbers to find GCD using Euclidean algorithm:";
    cin >> result;
    result = gcd(u,v);
    if (gcd)
        cout << "\nThe GCD of " << u << " and " << v << " is: " << result << endl;
    else
        cout << " \nInvalid input !!!\n";

    return 0;
    }
