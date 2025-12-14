#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int T;

    if (!(cin >> T)) return 0;

    
    for (int j = 0; j < T; j++) {
        
        int N;
        if (!(cin >> N)) return 0;


        int max_speed = -1; 
        int winner_label = -1;

        
        for (int i = 1; i <= N; i++) {
            int d, t; 
            
            
            if (!(cin >> d >> t)) return 0;

            
            int current_speed = d / t;


            if (current_speed > max_speed) {
                
                max_speed = current_speed;
                winner_label = i;
            } 
            
        }


        cout << winner_label << endl;
    }

    return 0;
}