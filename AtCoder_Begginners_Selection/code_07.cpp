#include <iostream>
#include <numeric>
#include <assert.h>
#include <stdio.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int maxElement(int *array, size_t size)
{
    assert(array != NULL);
    assert(size >= 1);

    int max = 0;
    for (size_t i = 0; i < size; ++i) {
        
        cout << *array;

        if (max < *array) {
            max = *array;
            *array = 0;
            cout << "*";
        }
        cout << endl;

        ++array;

    }
    cout << "---------" << endl;

    return max;
}

int main()
{
    int N, Alice=0, Bob=0;
    cin >> N;

    int a[N];
    for (int i=0; i<N; ++i) {
        cin >> a[i];
    }

    cout << "---------" << endl;

    for (int i=0; i<N; ++i) {
        if (i%2==0) Alice += maxElement(a, SIZE_OF_ARRAY(a));
        else Bob += maxElement(a, SIZE_OF_ARRAY(a));
    }

    cout << Alice << endl;
    cout << Bob << endl;

    return 0;
}