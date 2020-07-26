#include <iostream>

using namespace std;

int main()
{
    int N, count;
    cin >> N;

    int nums[N];

    for(int i=0; i<N; i++)
    {
        cin >> nums[i];
    }  

    int i = 0;
    while(nums[i]%2==0){
        count = count + 1;
        nums[i] = nums[i] / 2;
        i = i + 1;
        if(i==N)
            i = 0;
    }

    cout << count/N << endl;

    return 0;
}