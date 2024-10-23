#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important
// The diagram is more important in this case

void TOH(int n, char X, char Y, char Z)
{
    if(n != 0) // Base case
    {
        TOH(n-1, X, Z, Y);
        cout << "From " << X << " to " << Z << " using " << Y << endl;
        TOH(n-1, Y, X, Z);
    }
}

int main()
{
    TOH(3, 'X', 'Y', 'Z');
}
