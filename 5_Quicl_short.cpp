#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int partition(int ar[], int low, int high)
{
    int pivot = ar[low];
    int s = low + 1;
    int e = high;

    while (true)
    {
        while (ar[s] < pivot)
        {
            s++;
        }
        while (ar[e] > pivot)
        {
            e--;
        }

        if (s < e)
        {
            swap(ar[s], ar[e]);
        }
        else
        {
            break;
        }
    }
    swap(ar[low],ar[e]);
    return e;
}
void Quick_sort(int ar[], int low, int high){
     if(low<high){
        int pivot_index = partition(ar,low,high);
        Quick_sort(ar,low,pivot_index-1);
        Quick_sort(ar,pivot_index+1,high);
     }
 }
int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    Quick_sort(ar, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}