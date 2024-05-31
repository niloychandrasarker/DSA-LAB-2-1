#include <bits/stdc++.h>
using namespace std;
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

    for (int i = 1; i<n ; i++)
    {
        int key = ar[i];
        int j = i-1;
        while(j>=0 && key<ar[j])
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}