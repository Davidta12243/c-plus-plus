#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    const long long mod = 1000000007;
    cin >> n; // nhập số n

    long long sum = 0;
    vector<long long> a(n); // khai báo vector chứa phàn tử
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i]; // nhập dãy số gồm a phần
    }
    for (long long i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            break; // dừng tổng khi gặp số 0
        }
        sum += a[i];
    }
    cout << sum;
    return 0;
}