#include<iostream>
#include<vector>
using namespace std;
vector<int> dp(101, -1);
void func(int n) {
    if (n==0) return;

    if (dp[n] == -1) {
    cout<<"I love Recursion"<<endl;
    dp[n] = 1; 
    }
    
    func(n-1);

}
int main() {
    int n;
    cin>>n;
    func(n);
    return 0;
}