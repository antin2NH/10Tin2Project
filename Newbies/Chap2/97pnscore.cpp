#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;
    if (x < 48 || x%5<=2) {
        cout << x;
    } else {
        cout << (x/5+1)*5;
    }   
}
