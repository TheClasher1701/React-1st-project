#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        if (s == t) {
            cout << "YES" << endl;
            continue;
        }
        else{
            bool found = false;
            int n = s.length();
            int n = t.length();
        
            for (int i = 0; i < n ; i++) {
                if (s[i] == t[i]) {
                // Check for matching substrings
                    int j = i;
                    while (j < n && s[j] == t[j]) {
                        j++;
                    }
                    if (j > i) { // Found a matching substring
                        found = true;
                        break;
                    }
                }
            }

            if (found) {
                cout << "YES" << endl;
            }   
            else {
            cout << "NO" << endl;
            }
            
        }

       
    }
    return 0;
}

