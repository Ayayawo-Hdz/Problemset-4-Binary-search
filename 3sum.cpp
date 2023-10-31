#include <bits/stdc++.h>

using namespace std;

void three() {
    int n, e;
    cin >> n;
    int count[10] = {};
    while (n--) {cin >> e; count[e % 10]++;}
    vector<int> arr;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < min(count[i], 3); j++) {arr.push_back(i);}
    }
    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if ((sum % 10) == 3) {cout << "YES\n"; return;}
            }
        }
    }
    cout << "NO\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {three();}
    
    return 0;
}
