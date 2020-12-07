// sum the numbers from 50 to 100 (use while)

#include <iostream>
using namespace std;

auto sum(int lo, int hi)
{
    if(lo > hi) return 0;
    return lo + sum(lo + 1, hi);
}

int main()
{
    cout << "Sum of 50 to 100 inclusive is: " << sum(50, 100) << endl;
    return 0;
}
