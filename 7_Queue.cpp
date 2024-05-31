#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl '\n'
const int max_size=100;
int ar[max_size];
int front = -1, rear = -1;

bool empty(){
    return front==-1 && rear == -1;
}
bool full(){
    return rear == max_size-1;
}
void Enqueue(int value){
    if(full()){
        cout<<"Queue is full"<<endl;
    }
    else if(empty()){
        front = rear = 0;
    }
    else{
       rear++;
    }
     ar[rear]=value;
}

int peek(){
    if(!empty())
    {
        return ar[front];
    }
    else
    {
        cout<<"Stake is Empty"<<endl;
        return -1;
    }
}
void Dequeue(){
    if(empty()){
        cout<<"Stake is Empty"<<endl;
        return;
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        cout<<"Dequeueed Element is : " << ar[front]<<endl;
        front++;
    }
}
void desplay(){
    if(empty()){
        cout<<"Stake is Empty"<<endl;
        return;
    }
    else{
        cout << "Element Are : ";

        for(int i=front ; i<=rear ; i++){
            cout<<ar[i]<<" ";
        }
    }
}
int main() 
{
    //optimize();
    int ch;
    while(true){
        cout<<"\n1.Enqueue\n2.Peek\n3.Dequeue\n4.Display\n5.Exit\n";
        cout<<"Chose an Option : ";
        cin>>ch;
        switch(ch){
            case 1 : {
                int value;
                cout<<"Enter Value to Enqueue : ";
                cin>>value;
                Enqueue(value);
                break;
            }
            case 2 : {
                int frontElement = peek();
                if(frontElement!=-1){
                    cout<<"front Element : "<<frontElement<<endl;
                }
                break;
            }
             case 3 : {
                Dequeue();
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