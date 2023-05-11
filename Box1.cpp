/* 
    |-----------------------------------------|
    |   Md.Unus Masum                         |
    |   Competitive Programmer                |
    |   GitHub : https://github.com/Masum-SM  |
    |-----------------------------------------|
*/
#include<bits/stdc++.h>

using namespace std;


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(tc>0){
            cout<<endl;
        }
    }


    return 0;
}