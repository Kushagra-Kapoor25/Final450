#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    set<int> s(arr, arr + size);
    set<int>::iterator itr = s.begin();
    advance(itr, k - 1);
    for (auto e : s)
        cout << e << " ";
    cout << "\n";
    cout << *itr << "\n";
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n)