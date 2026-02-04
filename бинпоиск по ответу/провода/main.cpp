#include <bits/stdc++.h>
using namespace std;
int count(int mid, vector<int> L){
    int cnt = 0;
    for(int i = 0; i < L.size(); i++){
        cnt += L[i] / mid;
    }
    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> L(n);
    for(int i = 0; i < n; i++) cin >> L[i];
    int left = 0, right = 10000001;
    while(right - left > 1){
        int mid = (right + left) / 2;
        if(count(mid, L) < k){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << left;
    return 0;

}
