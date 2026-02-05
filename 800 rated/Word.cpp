#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        for (char c : str)
        {
            cout << (char)toupper(c);
        }
    }
    else
    {
        for (char c : str)
        {
            cout << (char)tolower(c);
        }
    }
}