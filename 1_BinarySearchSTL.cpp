#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &arr, int key)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3, 5, 7, 11, 14, 18, 20};
    int key = 28;
    int ans=BinarySearch(arr, key);
    if(ans==-1)
    {
        cout<<"Element Not Present "<<endl;
    }
    else
    cout << "Key Present at index no : " << ans;
    return 0;
}