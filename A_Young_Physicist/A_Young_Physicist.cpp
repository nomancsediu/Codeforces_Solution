#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sumx = 0, sumy = 0,sumz = 0;
    for (int i = 0; i < n;i++)
    {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        sumx += xi;
        sumy += yi;
        sumz += zi;
    }

    if(sumx==0 and sumy==0 and sumz==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}