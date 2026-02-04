#include <iostream>
#include <vector>

using namespace std;

long long find_t(long long t, long long x, long long y){
    if(t < min(x, y)){
        return 0;
    }
    t -= min(x, y);
    return t / x + t / y + 1;
}

int main(){
    unsigned long long n;
    unsigned short x, y;
    cin >> n >> x >> y;

    long long l = 0, r = n * min(x, y);
    while(l + 1 != r) {
        long long m = (l + r) / 2;
        if (find_t(m, x, y) >= n) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r << endl;

    return 0;
}
