#define ll long long
#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int x, y = 0;
    while(n--) {
        int row[5];
        for(int i=0; i<5; i++) {
            cin >> row[i];
            if(row[i] == 1) {
                x = 5-n;
                y = i+1;
                // cout << 5-n << ", " << i+1 << "\n";
            }
        }
    }
    cout << abs(x-3)+abs(y-3) << "\n";
}