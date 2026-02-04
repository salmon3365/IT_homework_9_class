#include <bits/stdc++.h>

using namespace std;
double f(double x) {
        return x * x* x + x * x + 2 * x + 3;

}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        double left = -2, right = -1, eps = 0.0001;
        while (abs(right - left) >= eps) {
                double mid = (left + right) / 2;
                if (f(left) * f(mid) < 0) {
                        right = mid;
                } else {
                        left = mid;
                }
        }

        cout << fixed << setprecision(4) << (left + right) / 2;




        return 0;
}