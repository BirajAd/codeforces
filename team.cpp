#define ll long long
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int total = 0;
    while (a--) {
       int b[3];
       int sum = 0;
       for(int i=0; i<3; i++) {
        cin >> b[i];
        if(b[i] == 1) {
            sum += 1;
        }
       }
       if(sum >=2) {
        total += 1;
       }
    }
    cout << total << "\n";
}
