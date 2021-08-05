#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 0, 4);
    for (auto e : arr)
        cout << e << " ";
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(1)