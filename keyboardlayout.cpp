#include <bits/stdc++.h>
void doSome();

using namespace std;

void doSome() {
    string alph1, alph2, s, word;
    
    cin >> alph1;
    cin >> alph2;
    cin >> s;
    
    for (auto& i : s) {
        int c = i;
        if (isupper(c)){
            i = tolower(i);
            for (int j = 0; j < alph1.size(); j++) {
                if (i == alph1[j]) {word += toupper(alph2[j]); break;}
            }
        } else if (islower(c)){
            for (int j = 0; j < alph1.size(); j++) {
                if (i == alph1[j]) {word += alph2[j]; break;}
            }
        } else {
            word += i;
        }
    }
    cout << word;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
