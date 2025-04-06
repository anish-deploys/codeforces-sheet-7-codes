#include <iostream>
#define ll long long
using namespace std;

ll Fact(int n, ll fact = 1) {
    if (n == 1) return fact;
    return Fact(n - 1, fact * n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << Fact(n);
    return 0;
}
