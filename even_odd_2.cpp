#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string n;
        cin >> n;
        int len = n.length();
        if (n[len - 1] % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}