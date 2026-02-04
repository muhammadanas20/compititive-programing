#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[5][5];
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> array[i][j];
            if (array[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    int moves;
    moves = abs(a-2) + abs(b-2);
    cout << moves ;
    return 0;
}