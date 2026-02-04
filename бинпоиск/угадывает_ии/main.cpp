#include "bits/stdc++.h"
using namespace std;
int main() {
    int left = 1, right = 100, cnt = 0;
    while (true) {
        cnt++;
        int ans = (left + right) / 2;
        cout << "number is " << ans << "\n";
        string s; cin >> s;
        if (s == "=") {
            cout << "total" << cnt << "\n";
            break;
        }
        else if (s == "<") {
            right = ans - 1;
        }
        else {
            left = ans + 1;
        }

    }
    return 0;
}