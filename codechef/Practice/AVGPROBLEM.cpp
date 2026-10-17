// Problem: AVGPROBLEM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM?tab=statement
// Solved on: 2026-10-17T18:14:08.441Z

#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        float A, B, C;
        cin >> A >> B >> C;
        if ((A + B) > 2 * C) {
            cout << "YES\n";
        }
        else {

            cout << "NO\n";
        }



    }

    return 0;
}