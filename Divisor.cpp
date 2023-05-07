#include<bits/stdc++.h>

using namespace std;


int main(){
    int tc;
    cin>>tc;
    int i = 0;
    while(tc--){
        int n;
        cin>>n;
        i = i+1;
        cout<<"Case "<<i<<":"<<" ";
        for(int i = n ; i > 0 ; i--){
            int r = n%i;
            if(r == 0)cout<<n/i<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}