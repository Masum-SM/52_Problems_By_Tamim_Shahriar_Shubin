#include<bits/stdc++.h>

using namespace std;


int main(){
    for(int i = 1000 ; i > 0 ; i--){
        if(i%5 == 0 && i == 1000)cout<<i<<" ";
        if(i%5 == 0 && i !=1000) cout<<endl<<i<<" ";
        if(i % 5 != 0)cout<<i<<" ";
    }
    return 0;
}