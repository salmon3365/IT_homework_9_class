#include <bits/stdc++.h>
using namespace std;
void var_swap(unsigned int &a, unsigned int &b){
    unsigned int x = a;
    a = b;
    b = x;
    return ;

}
int main() {
    unsigned short n;

    cin >> n;

    for (unsigned short i=0; i<n; i++)

    {

        unsigned int a, b;

        cin >> a >> b;

        var_swap(a, b);

        cout << a << " " << b << endl;

    }
    return 0;

}
