#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl '\n'
const int max_size=100;
int st[max_size];
int top = -1;

bool empty(){
    return top==-1;
}
bool full(){
    return top == max_size-1;
}
void push(int value){
    if(full()){
        cout<<"Stake is full"<<endl;
    }
    else{
        st[++top]=value;
    }
}

int peek(){
    if(!empty())
    {
        return st[top];
    }
    else
    {
        cout<<"Stake is Empty"<<endl;
        return -1;
    }
}
void pop(){
    if(empty()){
        cout<<"Stake is Empty"<<endl;
        return;
    }
    else{
        cout<<"Poped Element is : " << st[top]<<endl;
        top--;
    }
}
void desplay(){
    if(empty()){
        cout<<"Stake is Empty"<<endl;
        return;
    }
    else{
        cout << "Element Are : ";

        for(int i=top ; i>=0 ; i--){
            cout<<st[i]<<" ";
        }
    }
}
int main() 
{
    //optimize();
    int ch;
    while(true){
        cout<<"\n1.Push\n2.Peek\n3.Pop\n4.Display\n5.Exit\n";
        cout<<"Chose an Option : ";
        cin>>ch;
        switch(ch){
            case 1 : {
                int value;
                cout<<"Enter Value to Push : ";
                cin>>value;
                push(value);
                break;
            }
            case 2 : {
                int TopElement = peek();
                if(TopElement!=-1){
                    cout<<"Top Element : "<<TopElement<<endl;
                }
                break;
            }
             case 3 : {
                pop();
                break;
            }
            case 4 : {
                desplay();
                break;
            }
            case 5 : {
                cout<<"Exiting Code"<<endl;
                return 0;
            }
            default:{
                cout<<"invalid option"<<endl;
            }
            
        }

    }
    
    return 0;
}