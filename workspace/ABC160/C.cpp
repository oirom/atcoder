#include <iostream>
#include <numeric>
#include <assert.h>
#include <stdio.h>

#define SIZE_OF_ARRAY(D) (sizeof(D)/sizeof(D[0]))

using namespace std;

int maxElement(const int* array, size_t size)
{
    assert(array != NULL);
    assert(size >= 1);

    int max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}

int main()
{
    int K, N;
    cin >> K >> N;
    int A[N], D[N+1];

    for(int i=0; i<N; i++){cin >> A[i];}
    
    D[0] = A[0];
    for(int i=1; i<N; i++){D[i] = A[i] - A[i-1];}
    D[N] = A[0] + (K - A[N-1]);
  
    int max = maxElement(D, SIZE_OF_ARRAY(D));
    cout << K - max << endl;

    return 0;
}
