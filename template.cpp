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
        return 0;
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