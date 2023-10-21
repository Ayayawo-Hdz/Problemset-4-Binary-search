#include <bits/stdc++.h>
void doSome();

using namespace std;

void doSome() {
    int t, x, a, b, c, d;
    vector<int> dis;
    
    cin >> t;
    while (t--) {
        dis.clear();
        x = 0;
        cin >> a >> b >> c >> d;
        dis.push_back(a);
        dis.push_back(b);
        dis.push_back(c);
        dis.push_back(d);
        for (int j = 1; j < 4; j++) {
            if (dis[0] < dis[j]) {x++;}   
        }
        cout << x << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
