#include <bits/stdc++.h>
using namespace std;
bool check(long long mid, long long t, long long a, long long b,long long c) {
    long long all_days = mid / 3;
    long long not_all_days = mid % 3;
    long long ans = (a + b + c) * all_days;
    if (not_all_days >=1 ) {
        ans += a;
    }
    if(not_all_days >= 2) {
        ans += b;
    }
    return ans >= t;
}


int main() {
    int n;
    cin >> n;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        long long t, a, b, c;
        cin >> t >> a >> b >> c;
        if (a == t) {
            cout << 1 << endl;
        }
        else {
            long long left = 0, right = 3 * 1000000000LL;
            long long ans = right;
            while (right >= left) {
                long long mid = left + (right - left) / 2;
                if (check(mid, t, a, b, c)) {
                    ans = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1 ;
                }

            }
            cout << ans << endl;
        }
    }
    return 0;
}
