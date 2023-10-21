#include <bits/stdc++.h>
void doSome();

using namespace std;

void doSome() {
    int t, n, x;
    string word, name = "Timur";
    sort(name.begin(), name.end());
    
    cin >> t;
    while (t--) {
        x = 0;
        cin >> n;
        cin >> word;
        if (n != 5) {cout << "NO\n"; continue;}
        sort(word.begin(), word.end());
        for (int i = 0; i < 5; i++) {
            if (word[i] == name[i]) {x++;}
        }
        if (x == 5) {cout << "YES\n";} else {cout << "NO\n";}
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
