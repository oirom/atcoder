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
    
    int d[N];
    for(int i=0; i<N; i++){
        cin >> d[i];
    }

    QuickSort(d, 0, N-1);
    
    int mochi = 1;

    for(int i=0; i<N-1; i++){
        if (d[i]!=d[i+1])
            mochi += 1;
    }

    cout << mochi <<endl;

    return 0;
}