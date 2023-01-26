// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(vector<int> &arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArray(vector<int> &arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr{5, 1, 4, 2, 8};
    int N = arr.size();
    bubbleSort(arr, N);
   
    cout << "Sorted array: \n";
    printArray(arr,N);
    return 0;
}
