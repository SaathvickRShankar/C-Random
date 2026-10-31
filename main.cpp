#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long x;
    long long prev;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            prev = x;
        }
        else
        {
            if (x < prev)
            {
                sum += prev - x;
            }
        }
        prev = x;
    }
    cout << sum;
    return 0;
}