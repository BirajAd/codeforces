#define ll long long
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int x = 0;
    while(a--) {
        string st;
        cin >> st;
        if(st[0] == '+' || st[2] == '+') {
           x++; 
        } else {
            x--;
        }
    }
    cout << x << "\n";
}