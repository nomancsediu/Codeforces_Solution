#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    for (int i = y + 1; i < 9100;i++)
    {
        string year = to_string(i);
        sort(year.begin(), year.end());
        auto it = unique(year.begin(), year.end());
        int len = it - year.begin();
        string years = to_string(y);
        int size_year = years.size();
        if(size_year == len){
            cout << i << endl;
            break;
        }
    }
}