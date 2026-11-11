
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> wrong;

        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                wrong.push_back(p[i]);
            }
        }

        reverse(wrong.begin(), wrong.end());

        bool ok = true;
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                if (wrong[j] != i + 1) {
                    ok = false;
                    break;
                }
                j++;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
 
