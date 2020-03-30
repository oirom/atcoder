#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void QuickSort(int A[], int left, int right)
{
	int Left, Right;
	int pivot;

	Left = left; Right = right;

	pivot = A[(left + right) / 2];

	while (1) {

		while (A[Left] > pivot) Left++;
		while (pivot > A[Right]) Right--; 

		if (Left >= Right) break;

		swap(&A[Left], &A[Right]);

		Left++; Right--;
	}

	if (left < Left - 1) QuickSort(A, left, Left - 1);
	if (Right + 1 < right) QuickSort(A, Right + 1, right);
}

int main()
{
    int N;
    cin >> N;
    
    int a[N];
    for(int i=0; i<N; i++)
    {
        cin >> a[i];
    }

    QuickSort(a, 0, N-1);

    int Alice=0, Bob=0;

    
    for(int i=0; i<N; i++)
    {
        //cout << a[i] << " ";
        if(i%2==0) Alice = Alice + a[i];
        else if(i%2==1) Bob = Bob + a[i];
    }
    /*
    cout << endl;
    
    cout << "Alice : " << Alice << endl;
    cout << "Bob   : " << Bob << endl;
    cout << "diff  : " << Alice - Bob << endl;
    */

    cout << Alice - Bob << endl;

    return 0;
}