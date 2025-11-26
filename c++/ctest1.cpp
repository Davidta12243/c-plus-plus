# 189
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    const long long mod = 1000000007;
    cin >> n;

    long long sum = 0;
    vector<long long> a(n); // khai báo vector chứa phàn tử
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i]; // nhập dãy số gồm a phần
    }
    for (long long i = 0; i < n; i++)
    {
        sum = (sum + (i + 1) * (i + 2) * a[i] / 2) % mod;
    }
    if (sum < 0)
    {
        sum = sum + mod;
    }
    cout << sum;
    return 0;
}