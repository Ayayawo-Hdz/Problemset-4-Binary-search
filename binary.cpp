#include <bits/stdc++.h>

using namespace std;

int binary(const vector<int>& nums) {
    int l = 0, r = nums.size() - 1, num;
    
    cin >> num;
    
    while (l <= r) {
        int m = (l + r) / 2;
        if (nums[m] == num) {while (m > 0 && nums[m - 1] == num) {m--;} cout << m << "\n"; return 0;}
        if (nums[m] < num) {l = m + 1;} else {r = m - 1;}
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums;
    int e, n, q;
    
    cin >> n >> q;
    
    while(n--) {cin >> e; nums.push_back(e);}
    while (q--) {binary(nums);}
    
    return 0;
}
