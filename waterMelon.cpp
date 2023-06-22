#define ll long long
#include <iostream>

using namespace std;

int main() {
    ll int a;
    cin >> a;
    if(a % 2 != 0) {
        cout << "NO\n";
    } else {
        if(a <= 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}