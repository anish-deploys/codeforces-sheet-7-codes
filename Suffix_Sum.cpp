#include <iostream>
#define ll long long
using namespace std;

ll suffixSum(ll arr[], int n, int m)
{
    if (m == 0) return 0;
    return arr[--n] + suffixSum(arr, n, --m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    ll arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << suffixSum(arr, n, m);

    return 0;
}