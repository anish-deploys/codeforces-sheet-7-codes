#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxx(vector<int>& v,int size, int idx, int max) {
    if (max < v[idx]) max = v[idx];
    if (idx == size - 1) return max;

    return maxx(v, size, idx + 1, max);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int size;   
    cin>>size;
    
    vector<int> v(1000);
    for (int i=0;i<size;i++) {
        cin>>v[i];
    }

    int n = INT_MIN;
    cout<< maxx(v, size, 0, n);
}