#include <bits/stdc++.h>
using namespace std;
enum class Status {
    NO_ONE,
    ALL,
    ONE,
    TWO
    };
void solve(double a, double b, double c, double& x1, double& x2, Status& status);
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a, b, c;
        cin >> a >> b >> c;
        double x1, x2;
        Status status;
        solve(a, b, c, x1, x2, status);
        if (status == Status::NO_ONE) {
            cout << "NO" << endl;
        } else if (status == Status::ALL) {
            cout << "ALL" << endl;
        } else if (status == Status::ONE) {
            cout << x1 << endl;
        } else {
            cout << min(x1, x2) << " " << max(x1, x2) <<  endl;
        }
    }


    return 0;
}
void solve(double a, double b, double c, double& x1, double& x2, Status& status) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                status = Status::ALL;
            } else {
                status = Status::NO_ONE;
            }
        }
        else{
            status = Status::ONE;
            x1 = -c / b;

        }
    }
    else {
        double d = b * b - 4 * a * c;
        if (d < 0) {
            status = Status::NO_ONE;
        }
        else{
            status = Status::TWO;
            x1 = (-b + sqrt(d)) / (2 * a) + 0.0;
            x2 = (-b - sqrt(d)) / (2 * a) + 0.0;

        }
    }
}