#include <bits/stdc++.h>
void doSome();

using namespace std;

void doSome() {
    int t, n, a, b, maxq;
    
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> words;
        vector<int> qual;
        words.clear();
        qual.clear();
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (a <= 10) {words.insert({b, a});}
            qual.push_back(b);
        }
        int lastq = words.rbegin()->first;
        for (int i = 0; i < qual.size(); i++) {
            if (qual[i] == lastq) {maxq = i; continue;}
        }
        cout << maxq + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
