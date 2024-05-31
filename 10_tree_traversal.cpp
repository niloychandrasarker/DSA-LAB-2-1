#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl '\n'
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val= val;
        this->left=NULL;
        this->right=NULL;
    }
};
void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}
int main() 
{
    //optimize();
    Node* root = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->right = node6;

    InOrder(root);
    

    return 0;
}