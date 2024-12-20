#include "iostream"
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while (n != 0)
    {
        int a = n % 10;
        sum += a;
        n = n / 10;
    }
    cout << sum;
}