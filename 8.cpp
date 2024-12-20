#include "iostream"
using namespace std;

int main()
{
    long long n, ans = -1, val;
    cin >> n;
    while (n != 0)
    {
        val = n % 10;
        if (ans == -1)
        {
            ans = val;
        }
        else
        {
            ans = max(ans, val);
        }
        n = n / 10;
    }
    cout << ans << endl;
}