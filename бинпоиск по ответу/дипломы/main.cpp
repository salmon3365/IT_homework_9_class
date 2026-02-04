#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int left = 0, right = (w + h) * n;
    while(right - left > 1){
        int mid = (left + right) / 2;
        if((mid/ w) * (mid / h) >= n){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << right;

}
