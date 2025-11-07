#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* lchild;
    Node* rchild;
};
Node* insert(Node* &temp, int x) {
    Node* p = new Node;
    p->data = x;
    p->lchild = p->rchild = NULL;
    if (temp == NULL) {
        temp = p;
        return temp;
    }
    if (x > temp->data)
        temp->rchild = insert(temp->rchild, x);
    else if (x < temp->data)
        temp->lchild = insert(temp->lchild, x);
    else {
        cout << "No duplicates allowed\n";
    }
    return temp;
}
void iterativesearch(Node* temp, int x) {
    while (temp != NULL) {
        if (x > temp->data)
            temp = temp->rchild;
        else if (x < temp->data)
            temp = temp->lchild;
        else {
            cout << "Found\n";
            return;
        }
    }
    cout << "Not Found\n";
}
void recursivesearch(Node* temp, int x) {
    if (temp == NULL) {
        cout << "Not Found\n";
        return;
    }
    if (x == temp->data) {
        cout << "Found\n";
        return;
    }
    if (x < temp->data)
        recursivesearch(temp->lchild, x);
    else
        recursivesearch(temp->rchild, x);
}
void max(Node* temp) {
    if (temp == NULL) return;
    while (temp->rchild != NULL)
        temp = temp->rchild;
    cout << "Max: " << temp->data;
}
void min(Node* temp) {
    if (temp == NULL) return;
    while (temp->lchild != NULL)
        temp = temp->lchild;
    cout << "Min: " << temp->data;
}
void successor(Node* temp, int x) {
    Node* p = NULL;
    Node* node = temp;
    while (node != NULL && node->data != x) {
        if (x < node->data)
            node = node->lchild;
        else
            node = node->rchild;
    }
    if (node == NULL) {
        cout << "Value not found";
        return;
    }
    if (node->rchild != NULL) {
        Node* q = node->rchild;
        while (q->lchild != NULL)
            q = q->lchild;
        cout << "Successor = " << q->data;
        return;
    }
    while (temp != NULL) {
        if (x < temp->data) {
            p = temp;
            temp = temp->lchild;
        } else if (x > temp->data)
            temp = temp->rchild;
        else
            break;
    }
    if (p != NULL)
        cout << "Successor = " << p->data;
    else
        cout << "No successor";
}
void predecessor(Node* temp, int x) {
    Node* p = NULL;
    Node* node = temp;
    while (node != NULL && node->data != x) {
        if (x < node->data)
            node = node->lchild;
        else
            node = node->rchild;
    }
    if (node == NULL) {
        cout << "Value not found";
        return;
    }
    if (node->lchild != NULL) {
        Node* q = node->lchild;
        while (q->rchild != NULL)
            q = q->rchild;
        cout << "Predecessor = " << q->data;
        return;
    }
    while (temp != NULL) {
        if (x > temp->data) {
            p = temp;
            temp = temp->rchild;
        } else if (x < temp->data)
            temp = temp->lchild;
        else
            break;
    }
    if (p != NULL)
        cout << "Predecessor = " << p->data;
    else
        cout << "No predecessor";
}
int main() {
    Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 15);
    root = insert(root, 30);

    predecessor(root, 10);
    cout << endl;
    successor(root, 10);
    return 0;
}