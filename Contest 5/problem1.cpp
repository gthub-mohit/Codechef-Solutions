#include<bits/stdc++.h>
using namespace std;
int main(){
    int i , j , x , y;
    cin>>i;
    for(j=0;j<i;j++){
        cin>>x>>y;
        int a=(x+y)/2;
        cout<<a<<" ";
        cout<<y-a<<endl;
    }
    return 0;
}