#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    int a = 1;
    int b = 100;
    int x;
    x = rand() % (b - a + 1) + a;
    cout << "number is ready " << x << endl;
    int left = 1, right = 100;
    while (true) {
        cout << "your turn" << endl;
        int ans;
        cin >> ans;
        if (ans == x) {
            cout << "you win";
            break;
        }
        else {
            if (ans > x) {
                cout << "less "<< endl;
            }
            else{
                cout << "more"<< endl;
            }
        }
        cout << "ai turn" << endl;
        int mid = (left + right) / 2;
        cout << mid << endl;
        string answer;
        cin >> answer;
        if (answer == "=") {
            cout << "ai wins";
            break;
        }
        if (answer == "<") {
            right = mid;
        }
        if (answer == ">") {
            left = mid;
        }
    }
    return 0;
}