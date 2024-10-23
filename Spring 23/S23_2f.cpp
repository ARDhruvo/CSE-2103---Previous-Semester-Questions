#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important
// The diagram is more important in this case

void TOH(int n, char P, char Q, char R)
{
    if(n != 0) // Base case
    {
        TOH(n-1, P, R, Q);
        cout << "From " << P << " to " << R << " using " << Q << endl;
        TOH(n-1, Q, P, R);
    }
}

int main()
{
    TOH(4, 'P', 'Q', 'R');
}
