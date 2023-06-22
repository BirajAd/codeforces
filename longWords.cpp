#define ll long long
#include <iostream>

using namespace std;

int main() {
    int a;
    string b;
    cin >> a;
    while (a--) {
        cin >> b;
        int len = b.size();
        if(len <= 10) {
            cout << b << "\n";
        } else {
            cout << b[0] << len-2 << b[len-1] << "\n";
        }
    }
}
