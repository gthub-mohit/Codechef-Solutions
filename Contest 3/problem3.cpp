#include <iostream>

using namespace std;

void solve() {
    int N;
    cin >> N;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < N; ++i) {
        int element;
        cin >> element;

        if (element == 1) {
            count1++;
        } else if (element == 2) {
            count2++;
        } else if (element == 3) {
            count3++;
        }
    }

    int deletions1_3;
    if (count1 < count3) {
        deletions1_3 = count1;
    } else {
        deletions1_3 = count3;
    }

    int deletions2;
    if (count2 > 1) {
        deletions2 = count2 - 1;
    } else {
        deletions2 = 0;
    }
    int total_deletions = deletions1_3 + deletions2;
    cout << total_deletions << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}