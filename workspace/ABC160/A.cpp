#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string S;
    string s1 = "Yes";
    string s2 = "No";

    cin >> S;

    if (S[2]==S[3]&&S[4]==S[5])
        cout << s1 << endl;
    else 
        cout << s2 << endl;
    
    return 0;

}