#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5;i++)
    {
        for (int j = 0; j < 5;j++)
        {
            cin >> arr[i][j];
        }
    }

    int row = -1;
    int column = -1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j]==1)
            {
                row = i;
                column = j;
            }
            
        }
    }

    // for (int i = 0; i < 5;i++)
    // {
    //     for (int j = 0; j < 5;j++)
    //     {
    //         if(arr[i][j] == 1)
    //         {
    //             row = i;
    //             column = j;
    //         }
    //     }
    // }

    // cout << row << " " << column << endl;

    cout << abs(2 - row) + abs(2 - column) << endl;
}