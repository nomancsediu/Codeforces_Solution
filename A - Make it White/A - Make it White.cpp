#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        // cin >> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        size_t first = s.find('B');
        size_t last = s.rfind('B');
        cout << last - first + 1 << endl;

        // int first_black;
        // for (int i = 0; i < n;i++)
        // {
        //     if(s[i]=='B')
        //     {
        //         first_black = i;
        //         break;
        //     }
        // }
        // int last_black;
        // for (int i = n; i >= 0; i--)
        // {
        //     if(s[i]=='B')
        //     {
        //         last_black = i;
        //         break;
        //     }

        // }
        // cout << last_black - first_black + 1 << endl;
    }
}