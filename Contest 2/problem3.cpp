#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int T;
    cin>>T;

    for (int t = 0; t < T; t++) {
        
        int N;
        cin>>N;

        
        string S;
        cin>>S;

        int safe_birds_count = 0;
        

        for (int i = 0; i < N; i++) {
            
            if (S[i] == '0') {
                
                safe_birds_count++;
            } 
            
            else if (S[i] == '1') {
                
                break; 
            }
        }
        
        cout << safe_birds_count << endl;
    }
    return 0;
}