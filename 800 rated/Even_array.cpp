#include <iostream>
using namespace std;
#define LL long long int
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int no;
        cin >> no;
        LL array[no];
        for (int i = 0; i < no; i++)
        {
            cin >> array[i];
        }
        int evenparity = 0;
        for (int i = 0; i < no; i += 2)
        {
            if (array[i] % 2 != 0)
            {
                evenparity++;
            }
        }
        int oddparity = 0;
        for (int i = 1; i < no; i += 2)
        {
            if (array[i] % 2 == 0)
            {
                oddparity++;
            }
        }
        if (evenparity == oddparity)
            cout << evenparity << "\n";
        else
            cout << "-1" << "\n";
    }
    return 0;
}