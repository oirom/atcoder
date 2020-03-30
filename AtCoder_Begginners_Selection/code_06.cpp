#include <iostream>

using namespace std;

int main()
{
    int N, A, B, SUM=0, M;

    cin >> N >> A >> B;

    for(int i=1; i<N+1; i++)
    {
        M = (i%10) + (i%100 - (i%10))/10 + (i%1000 - (i%100))/100 + (i%10000 - (i%1000))/1000 + (i%100000 - (i%10000))/10000;
        if(A<=M&&M<=B)
            SUM += i;
    }

    cout << SUM << endl;

    return 0;
}