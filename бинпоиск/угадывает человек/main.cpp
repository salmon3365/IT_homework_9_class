#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(NULL));
    int a = 1, b = 100, x;
    x = rand() % (b - a + 1) + a;
    int cnt = 0;
    while (true) {
        cout << "Enter your number: ";
        int ans; cin >> ans;
        cnt++;
        if (ans == x) {
            cout << "You win!" << endl;
            cout << "number of tries: " << cnt << "\n";
            break;
        }
        else if (ans > x) cout << "less\n";
        else cout << "more\n";
    }
    return 0;
}