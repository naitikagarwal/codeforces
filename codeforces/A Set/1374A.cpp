#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int x, y, n;
        cin >> x >> y >> n;
        int k = n- (n-y)%x;
        cout << k << endl;
    }
    return 0;
}