#include <bits/stdc++.h>

using namespace std;
// need correction
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << n - i + j;
        }
        for (int j = 0; j < i; j++)
        {
            cout << n - j;
        }
        cout << endl;
    }
}
