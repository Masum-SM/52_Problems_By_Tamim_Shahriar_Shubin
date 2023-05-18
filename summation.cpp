/*
    |-----------------------------------------|
    |   Md.Unus Masum                         |
    |   Competitive Programmer                |
    |   GitHub : https://github.com/Masum-SM  |
    |-----------------------------------------|
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s = "";
        int i = 0;
        while (n > 0)
        {
            int digit = n % 10;
            n = n / 10;
            s += to_string (digit);
        }
        int len = s.size();

        cout<<"Sum = "<<s[0]-'0'+s[len-1]-'0'<<endl;
    }

    return 0;
}