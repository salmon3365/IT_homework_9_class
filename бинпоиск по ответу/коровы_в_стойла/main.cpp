#include <bits/stdc++.h>
using namespace std;
int check(vector<int> v,int d){
    int count = 0, left = 0, right = 1;
    while(right < v.size()){
        if(v[right] - v[left] >= d){
            count++;
            left ++;
            right ++;

        }
        else{
            right++;
        }
    }
    return count;

}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> z(n);
    for(int i = 0; i < n; i++){
        cin >> z[i];
    }
    int left = 0, right = z[n - 1] - z[0] + 1;
    while(right - left > 1){
        int mid = (right + left) / 2;
        if(check(z, mid) >= k){
            left = mid;
        }
        else{
            right = mid;
        }

    }
    cout << left;

}
