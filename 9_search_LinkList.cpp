#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == nullptr) {
        head = newNode;
        cout << "Inserted at head" << endl;
        return;
    }

    Node* tmp = head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "Inserted at tail" << endl;
}

void insert_at_position(Node*& head, int pos, int v) {
    if (pos == 0) {
        Node* newNode = new Node(v);
        newNode->next = head;
        head = newNode;
        cout << "Inserted at head" << endl;
        return;
    }

    Node* newNode = new Node(v);
    Node* tmp = head;
    for (int i = 1; i < pos && tmp->next != nullptr; ++i) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position " << pos << endl;
}

bool search_value(Node* head, int value) {
    Node* tmp = head;
    while (tmp != nullptr) {
        if (tmp->val == value) {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main() {
    Node* head = nullptr;
    while (true) {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Insert at any Position" << endl;
        cout << "Option 3: Print Linked List" << endl;
        cout << "Option 4: Search value" << endl;
        cout << "Option 5: Exit" << endl;
        cout<<"Chose an Option : ";
        int op;
        cin >> op;
        if (op == 1) {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        } else if (op == 2) {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            insert_at_position(head, pos, v);
        } 
        else if (op == 3)
        {
            print_linked_list(head);
        }
        else if (op == 4) {
            cout << "Enter value to search: ";
            int value;
            cin >> value;
            if (search_value(head, value)) {
                cout << value << " is found in the list." << endl;
            } else {
                cout << value << " is not found in the list." << endl;
            }
        } else if (op == 5) {
            break;
        } else {
            cout << "Invalid option, please choose between 1-4." << endl;
        }
    }
    return 0;
}
