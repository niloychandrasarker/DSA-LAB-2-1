#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl '\n'
int main() 
{
    //optimize();
    cout<<"<<<<<<<<<<<<<<<<<<<Create An Array>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"Enter the size of Array : ";
    int n;
    cin>>n;
    int ar[n];
    cout<<"\nEnter the array eliment : ";
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i];
    }

    cout<<"\nCreated Array : ";

    for(int i = 0 ; i<n ; i++){
        cout << ar[i] << " ";
    }

     cout<<"\n\n<<<<<<<<<<<<<<<<<<<Enter Eliment at any position>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"Enter the Elimwent : ";
    int m;
    cin>>m;
    cout<<"\nEnter the position : ";
    int p;
    cin>>p;

    if(p>=1 && p<=n){
        for(int i=n ; i>=p ; i--){
            ar[i]=ar[i-1];
        }
        ar[p-1]=m;
        n++;
    }
    else{
        cout<< "invalid position"<<endl;
    }
    
    cout<<"\nupdated Array : ";

     for(int i = 0 ; i<n ; i++){
        cout << ar[i] << " ";
    }

    
     cout<<"\n\n<<<<<<<<<<<<<<<<<<<Enter Eliment insert at last index>>>>>>>>>>>>>>>>>>"<<endl;
     cout<<"\nEnter the Elimwent : ";
     int lp;
     cin>>lp;
     ar[n] = lp;
     n++;

      cout<<"\nupdated Array : ";

     for(int i = 0 ; i<n ; i++){
        cout << ar[i] << " ";
    }
     
    cout<<"\n\n<<<<<<<<<<<<<<<<<<<Delete an element>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"\nEnter the index to be deleted : ";
    int index;
    cin>>index;

    if(index>=1 && index<=n)
    {
        int deleted_element = ar[index];
        for(int i = index ; i<n ; i++)
        ar[i]=ar[i+1];
    }
    cout<<"\nupdated Array : ";

     for(int i = 0 ; i<n-1 ; i++){
        cout << ar[i] << " ";
    }


    return 0;
}