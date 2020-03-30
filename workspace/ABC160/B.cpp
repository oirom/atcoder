#include <iostream>

using namespace std;

int main(void)
{
    int X, c1, c2;

    cin >> X;

    c1 = X/500;
    c2 = (X - c1*500)/5;

    cout << c1*1000+c2*5 << endl;

    return 0;
}