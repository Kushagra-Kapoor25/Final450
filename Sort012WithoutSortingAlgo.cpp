#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int l = 0, h = n - 1, mid = 0;
    while (mid <= h)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[l], arr[mid]);
            l++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[h], arr[mid]);
            h--;
            break;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 2, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n - 1);
    for (auto e : arr)
        cout << e << " ";
    return 0;
}
// Dutch National Flag Algorithm
// Time complexity: O(n)
// Space complexity: O(1)