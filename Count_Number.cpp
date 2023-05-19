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
        string s;
        int count =0;
        cin.ignore();
        getline(cin,s);

        // cout<<s<<endl;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ' && s[i+1] != ' '){
                count++;
            }
        }
        cout<<count+1<<endl;
    }

    return 0;
}