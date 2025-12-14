#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    int C;
    cin >> N >> C;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    string S;
    cin >> S;

    int P1 = 0;
    int P2 = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            P1 += A[i];
        } else {
            P2 += A[i];
        }
    }

    int M1 = P1;
    int M2;

    if (P1 >= C) {
        M2 = P1 + P2 - C;
    } else {
        M2 = M1;
    }

    int M = max(M1, M2);

    cout << M << endl;
}

int main() {
    

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}