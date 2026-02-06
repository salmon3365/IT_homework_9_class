#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = acos(-1);
    double epsilon = 1e-4;
    long long N = 100ll;
    double prev_d = 1e9;
    double point_x = 0.5L;
    double point_y = 0.0L;

    while (true) {
        const double step = 2.0 * PI / N;
        double min_d = 1e9;
        double min_x = 0.0;
        double min_y = 0.0;
        double min_t = 0.0;
        // поиск на [0, 2pi). (угол 2pi == 0)
        for (long long i = 0; i < N; i++) {
            // t - угол
            double t = i * step;
            double x = cos(t) * cos(t) * cos(t);
            double y = sin(t) * sin(t) * sin(t);
            double d = sqrt((x - point_x) * (x - point_x) + (y - point_y) * (y - point_y));
            if (d < min_d) {
                // обновляем минимумы
                min_d = d;
                min_x = x;
                min_y = y;
                min_t = t;
            }
        }

        if (fabs(min_d - prev_d) < epsilon) {
            cout << fixed << setprecision(8) << min_d << endl;
            cout << "Details for debug:" << endl;
            cout << fixed << setprecision(8) << min_x << endl;
            cout << fixed << setprecision(8) << min_y << endl;
            cout << fixed << setprecision(8) << min_t << endl;

            break;
        }

        prev_d = min_d;
        N *= 2;
    }

    return 0;
}
