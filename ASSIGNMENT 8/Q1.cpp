#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
void preorder(Node*temp){
    if(temp == nullptr){
        return;
    }
    cout << temp->data;
    preorder(temp->left);
    preorder(temp->right);
    
}
void inorder(Node*temp){
    if(temp == nullptr){
        return;
    }
    inorder(temp->left);
    cout << temp->data;
    inorder(temp->right);
}
void postorder(Node*temp){
    if(temp == nullptr){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data;
}
int main(){
    Node*temp = new Node(1);
    temp->left = new Node(2);
    temp->right = new Node(3);
    temp->left->left = new Node(4);
    temp->left->right = new Node(5);

    cout << "preorder: ";
    preorder(temp);
    cout << endl;

    cout << "inorder: ";
    inorder(temp);
    cout << endl;

    cout << "postorder: ";
    postorder(temp);
    cout << endl;

    return 0;
}