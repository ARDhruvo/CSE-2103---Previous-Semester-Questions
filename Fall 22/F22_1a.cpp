#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important

int Arr[10] = {0, 0}; // 10 just for the sake of it

void insertionSort(/*int Arr[10]*/)
{
    int n = /*Arr.size()*/ 10; // For running the loop equal to the size of Array
    for (int i = 1; i <= n-1; i++)
    {
        int key = Arr[i]; // Assuming the i-th term to be inserted in its position
        int j = i-1; // j is used to compare with the previous terms
        while ((j >= 0) && (Arr[j] > key))
        {
            Arr[j+1] = Arr[j];
            j--;
        }
        Arr[j+1] = key;
    }
}


// int main()
// {
//     srand(time(0));
//     for (int i = 0; i < 10; i++)
//     {
//         Arr[i] = rand()%69;
//     }
//     printing();
//     insertionSort(/*Arr[10]*/);
//     printing();
// }
