#include <bits/stdc++.h>
void doSome();

using namespace std;

void doSome() {
    int n, ff = 0;
    string c[] = {"R", "O", "Y", "G", "B", "I", "V"};
    string ans;
    
    cin >> n;
    ff = n/7;
    while (ff--) {
        for(int i=0; i<7; i++) {
            ans += c[i];
        } 
    }
    if (n % 7 == 1) {ans += "G";} else
    if (n % 7 == 2) {ans += "GB";} else
    if (n % 7 == 3) {ans += "GBI";} else
    if (n % 7 == 4) {ans += "GBIV";} else
    if (n % 7 == 5) {ans += "OYGBI";} else
    if (n % 7 == 6) {ans += "OYGBIV";}
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
