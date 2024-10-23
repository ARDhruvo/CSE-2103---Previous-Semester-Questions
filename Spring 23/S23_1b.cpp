#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important

int C[9] = {0,0};

int merge(int A[], int B[])
{
    // int n = A.size(), m = B.size(); // This line is more important for the Algorithm and not the code
    A[6] = INT_MAX;
    int n = 0, m = 4 - 1; // Use i an j in Algorithm
    for (int i = 0; i < 5 + 4 - 1; i++) // 5 and 4 for the sake of given array. Use (n + m - 1)
    {
        if (A[n] < B[m])
        {
            C[i] = A[n];
            n++;
        }
        else
        {
            C[i] = B[m];
            m--;
        }
    }
}

int main()
{
    // n and m are arbitrary but for this case lets do 5 and 4
    int A[5] = {11, 33, 55, 77, 99};
    int B[4] = {88, 66, 44, 22};
    merge(A, B);
    for (int i = 0; i < 9; i++)
    {
        cout << C[i] << " ";
    }
    
}