#include <iostream>

using namespace std;

int main()
{
    int N, n, sum, count=0;
    cin >> N;

    int nums[N];

    for(int i=0; i<N; i++)
    {
        cin >> nums[i];
    }  

    do {
        sum = 0;
        for(int i=0; i<N; i++)
        {   
            
            sum = sum + nums[i];
            nums[i] = nums[i] / 2;
        }

        if(sum%2==0){
            count = count + 1;
        }
        
        else{            
            n = 0;
            while(nums[n]%2==0){
                count = count + 1;
                n = n + 1;
            }
        }
    } while(sum%2==0);

    cout << count * N + n << endl;

    return 0;
}