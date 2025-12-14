#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        if (N <= X) {
            cout << 0 <<endl;
        } else {
            
            long long K = N - X;
            long long max_profit = K * (K + 1) / 2;
            std::cout << max_profit <<endl;
        }
    }
    return 0;
}
