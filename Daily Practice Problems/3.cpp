#include<bits/stdc++.h>
using namespace std;
int main(){
    int i , j , a , b ,c ;
    cin>>i;
    for(j=0;j<i;j++){
        cin>>a>>b>>c;
        if (a> abs(b-c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}