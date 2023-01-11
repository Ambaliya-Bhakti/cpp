#include<iostream>
using namespace std;

int fact(int);

int main()
{
    int b, ans;

    cout << "Enter Value Of N = ";
    cin >> b;

    ans = fact(b);

    cout << "Factorial Of " << b << " is = " << ans;
}

int fact(int a)
{
    if (a <= 1)
        return 1;
    else
        return a * fact(a - 1);
}
