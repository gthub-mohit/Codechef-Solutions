#include<iostream>
using namespace std;
int main(){
    long i,j,a,b;
    long sati;
    cin>>i;
    for (j=0;j<i;j++){
        cin>>a>>b;
        if (a==b){
            sati=a+b-1;
            cout<<sati<<endl;
        }
        else{
            sati=a+b;
            cout<<sati<<endl;
        }
        
    }
    return 0;
    
}