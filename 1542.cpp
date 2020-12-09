#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>

using namespace std;


class Solution {
public:
    int longestAwesome(string s) {
        int a[2048] = {0};
        a[0] = 1;
        int sum = 0;
        int max_len = 0;
        for (int i = 0; i < s.size(); i++) {
            sum ^= (1 << (s[i] - '0'));
            if (a[sum] == 0) {
                a[sum] = i + 2;
            } else {
                max_len = max(max_len, 2 + i - a[sum]);
            }
            for (int j = 0; j < 10; j++) {
                int x = sum ^(1 << j);
                if (a[x] != 0) {
                    max_len = max(max_len, 2 + i - a[x]);
                }
            }

        }
        return max_len;
    }
};

int main() {
    Solution s;

    cout << s.longestAwesome("3242415") << endl;
    assert(s.longestAwesome("3242415") == 5);
    assert(s.longestAwesome("12345678") == 1);
    assert(s.longestAwesome("213123") == 6);
    assert(s.longestAwesome("00") == 2);

    return 0;
}