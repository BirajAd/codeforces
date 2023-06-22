#define ll long long
#include <iostream>

using namespace std;

// 1000000000000000000 7
// 


// 100 7
// 100 - 2*7 - 2*7 - 2*7

// 31 - 2*12
// 31 12
// 

int main() {
    ll int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0) {
        ll int two_b = (b << 1);
        if(a >= two_b) {
            ll int equalizer = a/two_b;
            a -= equalizer*two_b;
        } else {
            ll int two_a = (a << 1);
            if(b >= two_a) {
                ll int equalizer = b/two_a;
                b -= equalizer*two_a;
            } else {
                break;
            }
        }
        // cout << a << " " << b << "\n";
    }
    cout << a << " " << b << "\n";
}