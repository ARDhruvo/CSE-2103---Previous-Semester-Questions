#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important

int A[10] = {0, 0};

bool binarySearch(int n, int val)
{
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (A[mid] == val)
        {
            return true;
        }
        else if (A[mid] < val)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return false;
}

// int main()
// {

//     srand(time(0));
//     for (int i = 0; i < 10; i++)
//     {
//         A[i] = 10 * (i + 1);
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     int val;
//     cin >> val;
//     if (binarySearch(10, val))
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not found" << endl;
//     }
// }
