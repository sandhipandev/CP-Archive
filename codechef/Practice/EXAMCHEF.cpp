// Problem: EXAMCHEF
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
// Solved on: 2026-09-18T16:23:10.993Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (2 * Z > X * Y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}