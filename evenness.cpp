#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int left = 0;
        int right = n - 1;
        int sunk = 0;
        
        while (k > 0 && left <= right) {
            if (left <= right && k > 0) {
                if (a[left] <= k) {
                    k -= a[left];
                    left++;
                    sunk++;
                } else {
                    break;
                }
            }
            if (left <= right && k > 0) { 
                if (a[right] <= k) {
                    k -= a[right];
                    right--;
                    sunk++;
                } else {
                    break;
                }
            }
        }
        
        cout << sunk << endl;
    }
    
    return 0;
}
