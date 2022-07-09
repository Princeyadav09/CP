#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        x--;
        a[x]++;
    }
    
    int l = 0, r = m;
    while (l < r) {
        int x = (l + r) / 2;
        
        long long time = 0, work = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= x) {
                time += (x - a[i]) / 2;
            } else {
                work += a[i] - x;
            }
        }
        
        if (time >= work) {
            r = x;
        } else {
            l = x + 1;
        }
    }
    
    cout << l << endl;
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}