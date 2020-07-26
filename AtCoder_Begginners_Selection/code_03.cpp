#include <iostream>
#include <string>

using namespace std;

int main()
{
    int counter = 0;
    string s;

    cin >> s;

    for (int i=0; i<3; i++)
    {
        if (s[i] == '1')
            counter = counter + 1;
    }

    cout << counter << endl;

    return 0;
}