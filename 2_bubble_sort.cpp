#include <bits/stdc++.h>
using namespace std;
#define optimize()                
  
#define endl '\n'
int main()
{
    // optimize();

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}