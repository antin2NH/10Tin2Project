#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << ' ';
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}