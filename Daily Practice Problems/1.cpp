#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count1 = 0;
        for(char c : s)
            if(c == '1') count1++;

        if(count1 == 0){
            cout << 0 << endl;
            continue;
        }

        int last1 = -1;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '1'){
                last1 = i;
                break;
            }
        }

        int convertible_zeros = 0;
        for(int i = 0; i <= last1; i++){
            if(s[i] == '0')
                convertible_zeros++;
        }

        cout << count1 + min(k, convertible_zeros) << endl;
    }
    return 0;
}
