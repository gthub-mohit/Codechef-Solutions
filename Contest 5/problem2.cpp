#include<bits/stdc++.h>

using namespace std;
int main() {
    int i, j, n;
    cin >> i;
    for (j = 0; j < i; j++) {
        cin >> n;
        int arr[n];
        for (int k = 0; k < n; k++) {
            cin >> arr[k];
        }
        int min_sum = 0;
        min_sum = arr[0] + arr[1];
        for (int k = 0; k <n-1; k++) {
            int current_sum = arr[k] + arr[k + 1];

            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
        cout<<min_sum<<endl;

    }
    return 0;
}