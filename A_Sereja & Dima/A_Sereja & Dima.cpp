#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    // auto it = max_element(dq.begin(), dq.end());
    int sum_of_sereja = 0;
    int sum_of_dima = 0;
    int m = 1;
    while (!dq.empty())
    {
        int max_point = max(dq.front(), dq.back());

        if (m % 2 != 0)
        {
            sum_of_sereja += max_point;
        }
        else
        {
            sum_of_dima += max_point;
        }

        if (max_point == dq.front())
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        m++;
    }

    cout << sum_of_sereja << " " << sum_of_dima << endl;
}