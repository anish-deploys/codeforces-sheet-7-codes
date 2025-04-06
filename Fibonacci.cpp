#include <iostream>
#define ll long long
using namespace std;
int fibonacci(int x) {
    if (x == 1) return 0;
    if (x == 2) return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}