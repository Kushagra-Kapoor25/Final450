#include <iostream>
using namespace std;
struct Pair
{
    int max;
    int min;
};

Pair getMinMax(int arr[], int low, int high)
{
    Pair minmax, mml, mmr;
    int mid;

    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 345, 1, 330};
    int size = 4;
    Pair minmax = getMinMax(arr, 0, size);
    cout << "Minimum element: " << minmax.min << "\n";
    cout << "Maximum element: " << minmax.max << "\n";
    return 0;
}

// Time complexity: O(3n/2-2)
// Space complexity: O(log n)