#include <bits/stdc++.h>
using namespace std;
#define optimize()

#define endl '\n'
int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        int min_index = i;
        for (int j = i+1; j <= n; j++)
        {
            if (ar[j] < ar[min_index])
            {

                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(ar[min_index], ar[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}