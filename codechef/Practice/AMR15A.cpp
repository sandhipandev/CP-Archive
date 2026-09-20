// Problem: AMR15A
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
// Solved on: 2026-09-20T16:51:39.737Z

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int even = 0, odd = 0;

    for (int i = 0; i < N; i++) {
        int weapons;
        cin >> weapons;

        if (weapons % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";

    return 0;
}